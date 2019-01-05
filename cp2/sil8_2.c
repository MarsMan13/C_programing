#include <stdio.h>
#include <stdlib.h>
void read_box(char *filename, int ***box, int *row, int *col);
void print_box(int **box, int row, int col);
int drop_box(int **box, int row, int col);
void free_box(int ***box, int row);

int main(void){

    char filename[20];
    int **box;
    int row, col;

    scanf("%s", filename);

    read_box(filename, &box, &row, &col);
    print_box(box, row, col);
    printf("%d\n", drop_box(box, row, col));

    free_box(&box, row);

    return 0;
}


void read_box(char *filename, int ***box, int *row, int *col){
    
    int res;
    int temp;
    int i, j;

    FILE *inp = fopen(filename, "r");
    if(inp == NULL){
        printf("opening Error\n");
        return;
    }
    else
        printf("opening Success\n");

    
    res = fscanf(inp, "%d %d", row, col);
    
    *box = (int **)calloc(*row, sizeof(int *));
    for(i = 0; i<*row; i++){
        (*box)[i] = (int *)calloc(*col, sizeof(int));
    }

    for(i = 0; i<*row; i++){
        for(j = 0; j<*col; j++){
            while(1){
                res = fscanf(inp, "%d", &temp);
                if(temp == 0 || temp == 1){
                    (*box)[i][j] = temp;
                    break;
                }
            }
        }
        
    }
    fclose(inp);
}

void print_box(int **box, int row, int col){
    
    int i, j;

    for(i = 0; i< row; i++){
        for(j = 0; j<col; j++)
            printf("%d", box[i][j]);
        printf("\n");
    }
}

int drop_box(int **box, int row, int col){
    
    int i, j;
    int temp = 0;

    for(j = 0; j<col; j++){
        for(i = temp; i<row; i++){
            if(box[i][j] == 1) break;
            else{
                temp = i;
            }
            if(i == row -1) return j+1;
        }
    }
    return col+1;
}

void free_box(int ***box, int row){
    
    int i;
    
    for(i = 0; i<row; i++)
        free(*(*box+i));
    free(*box);
    
    printf("Free success\n");
}

