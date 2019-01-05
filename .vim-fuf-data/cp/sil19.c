#include <stdio.h>
#include <stdlib.h>

void push_back(int **a, int *size, int value);
void pop_back(int **a, int *size);
double average(int *a, int size);
double variance(int *a, int size);


int main(void){
    
    int N;
    int i, ii;
    int md;
    int size = 0;
    int value;
    int *ary = (int *)malloc(1*sizeof(int));

    scanf("%d", &N);

    for(i = 0; i<N; i++){
        scanf("%d", &md);  
        
        if(md == 1){
            scanf("%d", &value);
            push_back(&ary, &size, value);
            
        }
        else if(md == 2){
            pop_back(&ary, &size);
        }
        

        for(ii = 0; ii<size; ii++)
            printf("%d ", *(ary+ii));
        printf("\n");
        
        printf("%.6lf %.6lf\n", average(ary, size), variance(ary, size));
        

    }


    return 0;
}

void push_back(int **a, int *size, int value){

    *size+=1;
    *a = (int *)realloc(*a, *size*sizeof(int));
    *(*a+(*size - 1)) = value;
    
    return;
}

void pop_back(int **a, int *size){
    
    *size-=1;
    *a = (int *)realloc(*a, *size*sizeof(int));

    return;
}

double average(int *a, int size){
    
    int i;
    double tot = 0;
    for(i = 0; i<size; i++)
        tot += *(a + i);

    return tot/size;
}

double variance(int *a, int size){
    
    int i;
    double tot = 0;
    double avg = 0;
    double v = 0;

    for(i = 0; i<size; i++)
        tot += *(a + i);

    avg = tot/size;
    
    tot = 0;
    for(i = 0; i<size; i++){
        tot += (*(a+i) - avg) * (*(a+i) - avg);
    }
    
    return tot/size;


}
