#include <stdio.h>
void swap(int *, int *);
void sort(int *, int);
void print_array(int *, int);

int main(void){

    int n;
    int ary[1000];
    int count = 0;

    scanf("%d", &n);

    while(count != n){
        scanf("%d", &ary[count]);
        count++;
    }
    

    sort(ary, n);
    print_array(ary, n);
    
    return 0;
}

void swap(int *a, int *b){
    
    int temp = *b;
    *b = *a;
    *a = temp;
}

void sort(int *a, int n){
    
    int count = 0;
    while(count <= n-2){
        if(*(a+count)>= *(a+(count+1))){
            swap(a+count, a+count+1);
        }
        count++;
    }
    if(n == 0)
        return;
    sort(a, n-1);
}

void print_array(int *a, int n){
    
    int count =0;
    while(count != n){

        printf("%d ", *(a+count));
        count++;
    }
    printf("\n");
}
