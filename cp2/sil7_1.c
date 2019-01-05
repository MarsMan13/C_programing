#include <stdio.h>
#include <stdlib.h>
void double_double(int **a, int *size);
void sort(int *a, int size);

int main(void){

    int n;
    int *p;
    int i;

    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));

    for(i=0; i<n; i++)
        scanf("%d", p+i);


    double_double(&p, &n);
    double_double(&p, &n);
    double_double(&p, &n);




    return 0;
}


void double_double(int **a, int *size){
    
    int i;
    *a = (int *)realloc(*a, (*size)*2*sizeof(int));

    for(i = 0; i<(*size); i++)
        *(*a+(*size*2)-i-1) = *(*a + i) *2;
    
    sort(*a, (*size)*2);

    for(i = 0; i<(*size)*2; i++)
        printf("%d ", *(*a+i));
    printf("\n");

    *(size) *= 2;

}

void sort(int *a, int size){
    
    int i, j;
    int temp;

    for(i = 0; i<size; i++){
        for(j = 0; j<size-i-1; j++){
            if(*(a + j)> *(a + j+1)){
                temp = *(a + j);
                *(a + j) = *(a +j +1);
                *(a + j+ 1) = temp;
            }
        }
    }
}

