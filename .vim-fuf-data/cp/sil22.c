#include <stdio.h>
#include <stdlib.h>
void def(int ***p, int n);
void def2(int ***p, int n);


int main(void){

    int **p;
    int n;
    int i, j;

    scanf("%d", &n);
    
    def(&p, n);
    def2(&p, n);

    for(i = 0; i<n; i++)
    {
        for(j = 0; j<i+1 ; j++)
            printf("%d ", p[i][j]);
        printf("\n");
    }

    return 0;
}


void def(int ***p, int n){

    int i,  j;

    *p = (int **)malloc(n *sizeof(int *));

    for(i = 0; i<n; i++){
        *(*p + i) = (int *)malloc((i+1) * sizeof(int));
    }
    
    return;
}

void def2(int ***p, int n){

    int i, j;

    for(i = 0; i<n; i++){
        for(j = 0; j<i+1; j++){
            if((j == 0) || (j == i))
                (*p)[i][j] = 1;
            else
                (*p)[i][j] = (*p)[i-1][j-1] + (*p)[i-1][j];
        }
    }


    return;
}
