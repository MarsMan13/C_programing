#include <stdio.h>
#include <stdlib.h>
int **def(int n);
void def2(int **p, int n);
void def3(int **, int **, int**, int n);
void def4(int **p, int n);


int main(void){

    int **p1, **p2;
    int **p3;
    int n;
    int i, j;

    scanf("%d", &n);

    p1 = def(n);
    p2 = def(n);
    def2(p1, n);
    def2(p2, n);

    p3 = def(n);

    def3(p1, p2, p3, n);

//
    for(i = 0; i< n;i++){
        for(j = 0; j<n; j++)
            printf("%d ", p3[i][j]);
        printf("\n");
    }
//배열 출력

    def4(p1, n);
    def4(p2, n);
    def4(p3, n);

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

void def2(int **p, int n){
    
    int i, j;

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &p[i][j]);
        }
    }
}

void def3(int **p1, int **p2, int **p3, int n){
    
    int i, j, k;
    
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            for(k = 0; k<n; k++){
                p3[i][j] += p1[i][k]* p2[k][j];
            }
        }
    }

}

void def4(int **p, int n){
    
    int i;

    for(i = 0; i<n; i++)
        free(*(p+i));
    free(p);
}



