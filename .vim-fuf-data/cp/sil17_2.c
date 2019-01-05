#include <stdio.h>
#include <stdlib.h>
int *get_next_process(int *prev_pointer, int size);
void sort(int *a, int);


int main(void){
    
    int n;
    int *ptr;
    int i = n, count = 1;

    scanf("%d", &n);

    ptr = (int *)malloc(sizeof(int)*n);
    
    for(i = 0; i<n; i++)
        scanf("%d", &ptr[i]);
    
    
    while(1){
        if(i == 1) break;
        ptr = get_next_process(ptr,i);
        i = (i%2 == 1) ? i/2+1 : i/2; 
    }

    return 0;
}

 
int *get_next_process(int *prev_pointer, int size){
    
    int next_size;
    int *next_pointer;
    int i, ii;

    sort(prev_pointer, size);
        
    next_size = (size%2 == 1) ? (size+1)/2 : size/2;
    next_pointer = (int *)malloc(sizeof(int)*next_size);
    ii = size-1;
    for(i = 0; i<next_size; i++){
        if(ii == 0)
            next_pointer[i] = prev_pointer[ii];
        next_pointer[i] = prev_pointer[ii]+prev_pointer[ii-1];
        ii-=2;
    }
        
    for(i = 0; i<next_size; i++)
        printf("%d ", next_pointer[i]);
    printf("\n");
        
    return next_pointer;
    
}

void sort(int *a, int n){
    
    int temp;
    int i, ii;

    for(i = 0; i<n; i++){
        for(ii = 0; ii<n-i-1; ii++){
            if(*(a+ii) > *(a+ii+1)){
                temp = *(a+ii);
                *(a+ii) = *(a+ii+1);
                *(a+ii+1) = temp;
            }
        }
    }
    return;
}

