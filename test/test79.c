#include <stdio.h>
#include <stdlib.h>



int main(void){

    int col, row;
    int i, j;
    int *ary1, **ary2;

    printf("Enter the Col : ");
    scanf("%d", &col);
    printf("Enter the Row : ");
    scanf("%d", &row);

    ary1 = (int *)malloc(col*row*sizeof(int));
    for(i = 0; i<col*row; i++)
        *(ary1+i) = i+1;
    //
    ary2 = (int **)malloc(col * sizeof(int *));
    for(i = 0; i<col; i++)
        *(ary2+i) = (ary1 + i*row);
    ////

    for(i = 0; i<col*row; i++){
        printf("%d ", *(ary1+i));
        if((i+1)%row == 0) printf("\n");
    }

    //
    printf("\n");
    for(i = 0; i<col; i++){
        for(j = 0; j<row; j++)
            printf("%d ", *(*(ary2+i)+j));
        printf("\n");
    }

    return 0;
}
