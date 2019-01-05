#include <stdio.h>
#include <stdlib.h>
void def(int **p, int n);

int main(void){

    int n;
    int **p;
    int i, j;

    scanf("%d", &n);

    p = (int **)calloc(n, sizeof(int *));
    for(i = 0; i<n; i++){
        p[i] = (int *)calloc(i+1, sizeof(int));
    }

    def(p, n);

    for(i = 0; i<n; i++){
        for(j = 0; j<=i;j++){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i<n; i++)
        free(p[i]);
    free(p);

    printf("%d\n", p[1][0]);

    return 0;
}

void def(int **p, int n){
    
    int i, j;

    for(i = 0; i<n; i++){
        for(j = 0; j<i+1; j++){
            if(j == 0 || j == i)
                p[i][j] = 1;
            else{
                p[i][j] = p[i-1][j-1] + p[i-1][j];
            }
        }
    }
}
