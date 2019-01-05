#include <stdio.h>
#include <stdlib.h>
void def(int ***p, int n);
void def2(int **p, int n);
void def3(int **p1, int **p2, int **p3, int n);

int main(void){

    int n;
    int **p1, **p2, **p3;
    int i,j;

    scanf("%d", &n);
    
    def(&p1, n);
    def(&p3, n);
    def(&p2, n);

    def2(p1, n);
    def2(p2, n);

    def3(p1, p2, p3, n);

    for(i = 0; i < n; i++){
        for(j = 0; j<n; j++)
            printf("%d ", p3[i][j]);
        printf("\n");
    }

    return 0;
};

void def(int ***p, int n){

    int i;

    *p = (int **)calloc(n, sizeof(int *));

    for(i = 0; i<n; i++)
        *(*p+i) = (int *)calloc(n, sizeof(int));

}

void def2(int **p, int n){
    int i, j;

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++)
            scanf("%d", (*(p+i)+j));
    }

}

void def3(int **p1, int **p2, int **p3, int n){

    int i, j, k;

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            for(k = 0; k<n; k++){
                p3[i][j] += p1[i][k] * p2[k][j];
            }
        }
    }


}



