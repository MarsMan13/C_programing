#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b);
void sort(int *a, int n);
void print_array(int *a, int n);

int main(void){
    
    int n;
    int *ary;
    int i;

    scanf("%d", &n);

    ary = (int *)calloc(n, sizeof(int));
    for(i = 0; i<n; i++)
        scanf("%d", (ary + i));

    sort(ary, n);


    return 0;
}

void sort(int *a, int n){

    int i, j;

    for(i = 0; i<n; i++){
        for(j = 0; j<n-i-1; j++){
            if(*(a + j)> *(a +j+1))
                swap((a + j), (a + j +1));
        }
    }
    
    print_array(a, n);

    return;

}

void swap(int *a, int *b){
    
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int *a, int n){
    
    int i;

    for(i = 0; i<n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    return;
}
