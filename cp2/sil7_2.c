#include <stdio.h>
#include <stdlib.h>
void push_back(int **a, int *size, int value);
void pop_back(int **a, int *size);
double average(int *a, int size);
double variance(int *a, int size);

int main(void){

    int n;
    int i, j;
    int *p;
    int size = 0;
    int mode, x;

    p = (int *)calloc(1, sizeof(int));

    scanf("%d", &n);
    
    for(i = 0; i<n; i++){
        scanf("%d", &mode);

        if(mode == 1){
            scanf("%d", &x);
            push_back(&p, &size, x);
        }
        else if(mode == 2)
            pop_back(&p, &size);
       

        
        for(j = 0; j<size; j++)
            printf("%d ", p[j]);
        printf("\n");
        
        printf("%lf %lf\n", average(p, size), variance(p, size));
    }

    return 0;
}

void push_back(int **a, int *size, int value){
    
    (*size)++;
    
    *a = (int *)realloc(*a, *size*sizeof(int));
    *(*a+(*size-1)) = value;
}

void pop_back(int **a, int *size){

    *size -=1;

    *a = (int *)realloc(*a, *size*sizeof(int));
}

double average(int *a, int size){
    
    int i;
    double tot = 0;

    for(i = 0; i<size; i++){
        tot += *(a + i);
    }
    
    return tot/=size;
}
double variance(int *a, int size){
    
    int i;
    double tot = 0, v = 0;
    
    for(i = 0; i<size; i++){
        tot += *(a + i);
    }
    tot /= size;
    
    for(i = 0; i<size; i++){
        v += (*(a+i)-tot) * (*(a+i) - tot);

    }
    return v/= size;
}



