#include <stdio.h>


int main(void){

    int ary[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    int i, j;

    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++)
            printf("%p ", &ary[i][j]);
        printf("\n");
    }

    printf("\n***************\n\n");

    printf("*(ary+1) : %p\n", *(ary+1));
    printf("*(ary+1)+2 : %p\n", *(ary+1)+2);

    return 0;
}
