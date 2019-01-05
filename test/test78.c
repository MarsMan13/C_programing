#include <stdio.h>
#include <stdlib.h>
void printMatrix(int *ary, int size);


int main(void){

    int col, row;
    int **matrix;
    int i, j;

    printf("Number of Rows : ");
    scanf("%d", &row);
    printf("Number of Cols : ");
    scanf("%d", &col);

    //
    matrix = (int **)malloc(sizeof(int *)*col);
    for(i = 0; i<row; i++)
        *(matrix + i) = (int *)malloc(sizeof(int)*row);

    //
    for(i=0; i<col; i++){
        for(j=0; j<row; j++){
            *(*(matrix+i)+j) = (i+1)*(j+1);
        }
    }

    for(i=0; i<col; i++)
        printMatrix(matrix[i], row);

    return 0;
}

void printMatrix(int *ary, int size){
    
    int i;

    for(i=0; i<size; i++)
        printf("%d ", *(ary+i));
    printf("\n");

}
