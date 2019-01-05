#include <stdio.h>
void def(int *a, int **max, int **min);

int main(void){
    
    int *max;
    int *min;
    int ary[5]= {1,2,3,4,5};

    def(&ary[0], &max, &min);

    printf("*max : %d,  max : %p\n", *max, max);
    printf("*min : %d,  min : %p\n", *min, min);
    
    return 0;
}

void def(int *a, int **max, int **min){

    int i;
    
    *max = (a+0);
    *min = (a+0);

    for(i = 0; i<5; i++){
        if(*(a+i) > **max){
            *max = (a+i);
        }
        if(*(a+i) < **min){
            *min = (a+i);
        }
    }
}
