#include <stdio.h>
#include <stdlib.h>

int **def(int n);

int main(void){

    int **p1;
    int n;
    int i, j;

    scanf("%d", &n);

    p1 = def(n);

//
    for(i = 0; i< n;i++){
        for(j = 0; j<n; j++)
            printf("%d ", p1[i][j]);
        printf("\n");
    }
//배열 출력

    return 0;
}

int **def(int n){

    int **p;
    int i;

//
    p = (int **)calloc(n, sizeof(int *));

    for(i = 0; i<n; i++){
        p[i] = (int *)calloc(n, sizeof(int));
    }
//2차원 배열의 동적할당
    
    return p;
}
