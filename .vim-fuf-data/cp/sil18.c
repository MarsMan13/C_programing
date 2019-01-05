#include <stdio.h>
#include <stdlib.h>
void double_double(int **a, int *size);
void sort(int **a, int size);


int main(void){

    int i = 3, ii;
    int *pt;
    int size;

    scanf("%d", &size);

    pt= (int *)calloc(size, sizeof(int));

    for(i = 0; i<size; i++){
        scanf("%d", &(*(pt + i)));
    }
    

    for(i = 3; i>0; i--){
        double_double(&pt, &size);
        for(ii=0; ii<size; ii++)
            printf("%d ", *(pt+ii));
        printf("\n");
    }
    return 0;
}

void double_double(int **a, int *size){
    
    int init = *size;
    int i;

    *size*=2;
    *a = (int *)realloc(*a, *size*sizeof(int));
    
    for(i = 0; i<init; i++)
        *(*a+init+i) = 2*(*(*a + i));
    

    sort(a, *size);

}

void sort(int **a, int size){
    
    int temp;
    int i, ii;

    for(i = 0; i<size; i++){
        for(ii= 0; ii<size-i-1; ii++){
            if(*(*a+ii)> *(*a+ii+1)){
                temp = *(*a+ii);
                *(*a+ii) = *(*a+ii+1);
                *(*a+ii+1) = temp;
            }
        }
    }
}
