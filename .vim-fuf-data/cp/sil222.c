#include <stdio.h>
#include <stdlib.h>
void read_box(char *filename, int ***box, int *row, int *col);
void print_box(int **box, int row, int col);
int drop_box(int **box, int row, int col);
void free_box(int ***box, int row);

int main(void){
        
    int row, col;
    char *filename;
    int **box;

    filename = (char *)malloc(30 * sizeof(char));
    
    read_box(filename, &box, &row, &col);
    print_box(box, row, col);

    printf("\n****\n%d\n", drop_box(box, row, col));

    free_box(&box, row);

    return 0;
}

void read_box(char *filename, int ***box, int *row, int *col){
    
    int res;
    int num;
    int count = 0;
    int i, j;

    scanf("%s", filename);
    FILE *inp = fopen(filename, "r");
    if(inp == NULL) printf("its Error\n");    
    res = fscanf(inp, "%d %d", row, col);

    *box = (int **)malloc(*row *sizeof(int*));
    for(i = 0; i<*row; i++)
        *(*box + i) = (int *)calloc(*col, sizeof(int));
    printf("%d %d\n", *row, *col);

    while(1){
        res = fscanf(inp, "%d", &num);
        if(res == EOF) break;

        if(num == 0 || num == 1){
            (*box)[(int)(count/(*col))][count%(*col)] = num;
            count++;
        }
    }

    fclose(inp);
    
    return;
}

void print_box(int **box, int row, int col){
    
    int i, j;

    for(i = 0; i<row; i++){
        for(j = 0; j<col; j++)
            printf("%d ", box[i][j]);
        printf("\n");

    }

    return;
}


int drop_box(int **box, int row, int col){

    int i, j;
    int k;

    for(j = 0; j<col; j++){
        if(box[0][j]!= 0){
            if(j == col-1) return col+1;
            else continue;
        }
        
        i = 0;
        k = j;
        while(1){
            if(box[i+1][k] == 0){
                i++;
                if(i == row-1) return k+1;
            }
            else if(k<col-2){
                if(box[i][k+1] == 0)
                    k++;
                else
                    break;
            }
        }   
    }
    return -1;
}

void free_box(int ***box, int row){
    
    int i;

    for(i = 0; i<row; i++){
        free(*(*box+i));
    }
    free(*box);


}

