#include <stdio.h>
#include <stdlib.h>

int* def(int *p, int);
void up(int *p, int n, int index);

int main(void){

    int n;
    int i;
    int *p = (int *)calloc(n, sizeof(int));

    scanf("%d", &n);

    for(i = 0; i<n; i++){
        scanf("%d", p+i);
    }
    
    p = def(p, n);
    
    for(i = 0; i<n; i++)
        printf("%d ", p[i]);
    printf("\n");


    return 0;
}

int* def(int *p, int n){
    
    int *pp = calloc(n, sizeof(int));
    int i, j;

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            if(p[i] <= pp[j]) continue;
            else{
                up(pp, n, j);
                pp[j] = p[i];
                break;
            }

        }
    }
    free(p);

    return pp;


}

void up(int *p, int n, int index){
    int i;
    for(i = n-2; i>=index; i--){
        p[i+1] = p[i];
    }
}


