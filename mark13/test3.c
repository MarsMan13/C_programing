#include <stdio.h>
#include <ncurses.h>

int main(void)
{
    initscr();
    WINDOW *win;
    WINDOW *win2 = newwin(10, 10, 10, 10);
    
    move(10,10);
    wprintw(win2, "hello world");
    move(20,20);
    refresh();
    wrefresh(win2);
    getch();
    endwin();

}
