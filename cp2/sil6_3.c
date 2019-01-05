#include <stdio.h>
#include <stdlib.h>
int *get_next_process(int *prev_pointer, int size);


int main(void){
    
    int *p;
    int n;
    int i;

    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));

    for(i =n-1; i>=0;i--)
        scanf("%d", p+i);

    get_next_process(p, n);

    


    return 0;
}

int *get_next_process(int *prev_pointer, int size){


    int next_size = (size+1)/2;
    int *next_pointer;
    int i, j;


    next_pointer = (int*)calloc(next_size, sizeof(int));
    
    j = 0;
    
    for(i = 0; i<next_size; i++){
        if(j+1>=size)
            *(next_pointer + i) = *(prev_pointer + j);
        else{
            *(next_pointer + i) = *(prev_pointer + j) + *(prev_pointer + j +1);
        }
        printf("%d ", *(next_pointer + i));
        j+=2;
    }
    printf("\n");

    if(next_size == 1) return 0;

    return get_next_process(next_pointer, next_size);

}
