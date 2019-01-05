#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>

#define KEY_SPACE ' ' // not defined in ncurses.h
#define KEY_Enter 10
#define START_ROW 5
#define START_COL 5

int HEIGHT, WIDTH;
int **initBoard(int **board, int *row, int *col, int *turn, int load);


void saveGame(int **board, int row, int col, int turn)
{
    char ary[100];
    int i, ii;

    move(11,11);
    printw("ENTER FILE NAME : ");
    refresh();
    echo();
    scanw("%s", ary);
    noecho();
    FILE *out = fopen(ary, "w");

    fprintf(out, "%d %d %d %d %d\n", HEIGHT, WIDTH, row, col, turn);
    for(i = 0; i<HEIGHT; i++)
    {
        for(ii = 0; ii<WIDTH; ii++)
            fprintf(out, "%d ", board[i][ii]);
        fprintf(out, "\n");
    }
    fclose(out);
    return;

    /*
		Save current game with given name 
	*/
	// TODO 
}

int** readSavedGame(int **board, int *row, int *col, int *turn)
{
    char ary[100];
    char ch;
    int i, ii;

    echo();
    move(0,0);
    printw("ENTER FILE NAME : ");
    refresh();
    scanw("%s", ary);
    FILE *inp = fopen(ary, "r");

    fscanf(inp, "%d %d %d %d %d\n", &HEIGHT, &WIDTH, row, col, turn);
    board=initBoard(board, row, col, turn, 0);
    for(i = 0; i<HEIGHT; i++)
    {
        for(ii = 0; ii<WIDTH; ii++)
        {
            fscanf(inp, "%d ", &board[i][ii]);
        }
    }
    
    refresh();
    fclose(inp);
    return board;
    /*
		Read the existing game
	*/
	// TODO 
}

int** initBoard(int **board, int *row, int *col, int *turn, int load)
{
	int i=0;
	board = (int**)malloc(sizeof(int*)*HEIGHT);

	for(i=0; i<HEIGHT; i++){
		board[i] = (int*)malloc(sizeof(int)*WIDTH);
	}

	printf("%d %d\n", HEIGHT, WIDTH);
	board[0][0] = ACS_ULCORNER;//'┌'
	for (i=1; i < WIDTH-1; i++)
		board[0][i] = ACS_TTEE;//'┬'
	board[0][WIDTH-1] = ACS_URCORNER; //'┐'

	for (i=1; i<HEIGHT-1; i++){
		int j=0;
		board[i][0] = ACS_LTEE; // '├'
		for (j=1; j < WIDTH-1; j++)
			board[i][j] = ACS_PLUS; //'┼'
		board[i][WIDTH-1] = ACS_RTEE; //'┤'
	}

	board[HEIGHT-1][0] = ACS_LLCORNER; //'└'
	for (i=1; i < WIDTH-1; i++)
		board[HEIGHT-1][i] = ACS_BTEE; //'┴'
	board[HEIGHT-1][WIDTH-1] = ACS_LRCORNER; // '┘'

	return board;
}

void paintBoard(int **board, WINDOW *win, int row, int col)
{
	int i, ii;

    wmove(win, 0, 0);
    for(i = 0; i<HEIGHT; i++)
    {
        for(ii = 0; ii<WIDTH; ii++)
            waddch(win, board[i][ii]);
        wmove(win, i+1, 0);
    }
    wmove(win,row,col);
    refresh();
    wrefresh(win);
    /*
		Print the board to the given WINDOW 
		using functions of the ncurses library.
	*/
	// TODO
}

int checkWin(int **board, int row, int col, int turn, int players)
{ 
    int min = (players == 2) ? 0 : 1;
    int count = 0;
    int i = 1;
    int ascii;
    if(players == 2)
        turn = (turn -1) < 0 ? 1 : 0;
    else if(players == 3)
        turn = (turn -1) <0 ? 2 : turn -1;
    
    if(turn == 0)
        ascii = 'O';
    else if(turn == 1)
        ascii = 'X';
    else if(turn == 2)
        ascii = 'Y';
    //가로
    //세로
    //오른 대각
    //왼쪽 대각
/////////////

 
    count = 0;
    for(i = 1; i<5 && col+i<WIDTH; i++)
    {
        if(board[row][col + i] == ascii)
            count +=1;
        else
            break;
    }
    for(i = 1; i<5 && col-i>=0; i++)
    {
        if(board[row][col - i] == ascii)
            count +=1;
        else
            break;
    }
    if(count == 4-min)
        return 1;
///////////////
    count = 0;
    i = 1;
    for(i = 1; i<5 && row+i<HEIGHT; i++)
    {
        if(board[row + i][col] == ascii)
            count +=1;
        else
            break;
    }
    for(i = 1; i<5 && row - i >=0; i++)
    {
        if(board[row - i][col] == ascii)
            count +=1;
        else
            break;
    }
    if(count == 4-min)
        return 1;
////////////////
    count = 0;
    i = 1;
    for(i = 1; i<5 && row+i < HEIGHT && col+i < WIDTH; i++)
    {
        if(board[row+i][col+i] == ascii)
            count +=1;
        else
            break;
    }
    for(i = 1; i<5 && row-i>=0 && col-i>=0; i++)
    {
        if(board[row-i][col-i] == ascii)
            count +=1;
        else
            break;
    }
    if(count == 4-min)
        return 1;
////////////////
    count = 0;
    i = 1;
    for(i = 1; i<5 && row+i<HEIGHT && col-i>=0; i++)
    {
        if(board[row+i][col-i] == ascii)
            count +=1;
        else
            break;
    }
    for(i = 1; i<5 && row-i>=0 && col+i<WIDTH; i++)
    {
        if(board[row-i][col+i] == ascii)
            count +=1;
        else
            break;
    }
    if(count == 4-min)
        return 1;

    
    return 0;

    // parameters and return type can be modified with any form. 
	/*
		Check if the game is over. 
	*/
	// TODO

}

int Action(WINDOW *win, int **board, int keyin, int *row, int *col, int *turn, int players)
{
    int x = 0;
//    keyin = getch();
//    getyx(win, *row, *col);
    switch(keyin)
    {
        case KEY_DOWN:
            if(*row == HEIGHT-1)
                break;
            *row +=1;
            break;
        case KEY_UP:
            if(*row == 0)
                break;
            *row -=1;    
            break;
        case KEY_LEFT:
            if(*col == 0)
                break;
            *col -=1;
            break;
        case KEY_RIGHT:
            if(*col == WIDTH-1)
                break;
            *col +=1;
            break;
        case KEY_Enter:
            if(*turn == 0)
            {
                if(board[*row][*col] != 'X' && board[*row][*col] != 'Y')
                {    
                    board[*row][*col] = 'O';
                    *turn = (*turn+1)% players;
                }
            }
            else if(*turn == 1)
            {
                if(board[*row][*col] != 'O' && board[*row][*col] != 'Y')
                { 
                    board[*row][*col] = 'X';
                    *turn = (*turn+1)% players;
                }
            }
            else if(*turn == 2)
            {
                if(board[*row][*col] != 'O' && board[*row][*col] != 'X')
                {
                    board[*row][*col] = 'Y';
                    *turn = (*turn+1)% players;
                } 
            }
            refresh();
            wrefresh(win);
            x = checkWin(board, *row, *col, *turn, players);
            if(x == 1)
            {
                return 1;
            }
            break;
        case KEY_SPACE:
            if(*turn == 0)
            {   
                if(board[*row][*col] != 'X' &&board[*row][*col] != 'Y')
                {
                    board[*row][*col] = 'O';
                    *turn = (*turn+1)%  players;
                }
            }
            else if(*turn == 1)
            {
                if(board[*row][*col] != 'O' && board[*row][*col] != 'Y')
                {
                    board[*row][*col] = 'X';
                    *turn = (*turn+1)% players;
                }
            }
            else if(*turn == 2)
            {
                if(board[*row][*col] != 'x' && board[*row][*col] != 'O')
                {
                    board[*row][*col] = 'Y';
                    *turn = (*turn+1)% players;
                }
            }
            refresh();
            wrefresh(win);
            x = checkWin(board, *row, *col, *turn, players);
            if(x == 1)
            {
                return 1;
            }
            break;
    }
    /*
		following right after the keyboard input,
		perform a corresponding action. 
	*/
	// TODO 
    return 0;
}


void gameStart(WINDOW *win, int load, int players){
    int x;
    int **board;
	int row = 0;
	int col = 0;
	int keyin;
    int turn= 0;
	wmove(win, row, col); 
	if(load == 'n')
    {
        board = initBoard(board, &row, &col, &turn, load); // Initiating the board
    }
    if(load == 'y')
    {
        board = readSavedGame(board, &row, &col, &turn);
        if(turn >=10)
        {
            players = 2;
            turn -= 10;
        }
        else
            players = 3;
        keypad(win, TRUE);
        noecho();
    }

    move(HEIGHT+10, 5);
    printw("1. Press 1 to save\n");
    
    printw("     2. Exit without save");
    wmove(win, row, col);
    refresh();
    wrefresh(win);

	
	while(1)
    {
        
        paintBoard(board, win, row, col);

        move(HEIGHT+10, 5);
        printw("1. Press 1 to save\n");
        printw("     2. Exit without save");
        wmove(win, row, col);
        refresh();
        wrefresh(win);
        
        move(HEIGHT+9, 5);
        if(turn == 0)
            printw("Current Turn : %c", 'O');
        else if(turn == 1)
            printw("Current Turn : %c", 'X');
        else
            printw("Current Turn : %c", 'Y');
        wmove(win, row, col);
        //paintBoard(board, win, row, col);
        refresh();
        wrefresh(win);

        keyin = getch();
        if(keyin == '1')
        {
            if(players == 2)
                turn += 10;
            saveGame(board, row, col, turn);
            break;
        }
        if(keyin == '2')
            break;
        x = Action(win, board, keyin, &row, &col, &turn, players);
        if(x == 1)
        {    
            paintBoard(board, win, row, col);
            move(HEIGHT+8, 5);
            printw("PLAYER%d WIN !! Press any button to terminate the program", ((turn-1)<0) ? players : turn);
            getch();
            return;
   
        }
        refresh();
        wrefresh(win);
    }
        // paintBoard(board, win, row, col);
		/*	
        This While loop constantly loops in order to 
			draw every frame of the WINDOW.
		*/

		// TODO LIST
		  // PAINT THE BOARD
		  // PAINT MENU
		  // MOVE CURSOR TO THE LAST POINT 
		  // GET KEYBOARD INPUT
		  // DO ACTION ACCORDING TO THAT INPUT
		  // update WINDOW 
	

}
int main(){
	char load;
	int players;
    int height, width;
	
    printf("Want to load the game?[y/n] : ");
    scanf("%c", &load);
   
    if(load == 'y')
    {
        initscr();
        noecho();
        cbreak();
        
        WINDOW *win = newwin(HEIGHT, WIDTH, START_ROW, START_COL);
        keypad(stdscr, TRUE);
        keypad(win, TRUE);
        gameStart(win, load, players);
    }
    else
    {
        while(1)
        {   
            printf("Enter the HEIGHT of the board : ");
            scanf("%d", &HEIGHT);
            if(HEIGHT > 0) break;
        }
    
        while(1)
        {
            printf("Enter the WIDTH of the board : ");
            scanf("%d", &WIDTH);
            if(WIDTH > 0) break;
        }

        while(1)
        {
            printf("Enter the number of players[2/3] : ");
            scanf("%d", &players);
            if(players == 2 || players == 3) break;
        }

        initscr();
        noecho();
        cbreak();
        WINDOW *win = newwin(HEIGHT, WIDTH, START_ROW, START_COL);
        keypad(stdscr, TRUE);
        keypad(win, TRUE);
        gameStart(win, load, players);
    }
        /*
    initscr();
    keypad(stdscr,TRUE);
    noecho();
    cbreak();
    
    WINDOW *win=newwin(HEIGHT,WIDTH,START_ROW,START_COL);
    keypad(win, TRUE);
    gameStart(win, load, players);
	*/
    // TODO 
	/*
		Prompts to ask options of the game
	*/

	// TODO LIST
	  // define a window
	  // terminate the window safely so that the terminal settings can be restored safely as well. 
    endwin();
	return 0;
}
