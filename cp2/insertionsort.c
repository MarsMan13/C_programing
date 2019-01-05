#include <stdio.h>
#include <stdlib.h>
void def(int *, int);

int main(void){

    int *p;
    int n;
    int i;

    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));

    for(i = 0; i<n; i++)
        scanf("%d", &p[i]);

    def(p, n);

    for(i = 0; i<n; i++)
        printf("%d ", p[i]);
    printf("\n");


    return 0; 
}


void def(int *p, int n){
    
    int i, j, k;
    int temp;

    for(i = 1; i<n; i++){
        temp = p[i];

        for(j = 0; j<i; j++){
            if(p[i]<p[j]) break;
        }

        for(k = i; k>j; k--){
            p[k] = p[k -1];
        }
        p[j] = temp;
    }

}
