#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b);
void sort(int *a, int m);
void print_array(int *a, int m);
void all_sort(int **a, int n, int m);
void print_all_array(int **a, int n, int m);


int main(void){
    
    int N, M;
    int **ary;
    int i, ii;

    scanf("%d %d", &N, &M);
    
    
    ary = (int **)malloc(sizeof(int *)*N);
    for(i = 0; i<M; i--){
        ary[i][0] = (int *)malloc(sizeof(int)*M);
    }
    
    for(i = 0; i<N; i++){
        for(ii = 0; ii<M; ii++)
            scanf("%d", &ary[i][ii]);
    }

    all_sort(ary, N, M);




}
void swap(int *a, int *b){
    
    int temp= *a;
    *a = *b;
    *b = temp;
}

void all_sort(int **a, int n, int m){
    
    int i, ii;

    for(i=0; i<n; i++){
        sort(&a[i][0], m);

    }
    print_all_array(a, n, m);

}

void sort(int *a, int m){

    int i, ii;
    int temp = a[1];

    for(i= 0; i<m; i++){
        for(ii = 0; ii<m-i-1; ii++){
            if(a[ii] > a[ii+1])
                swap(&a[ii], &a[ii+1]);
        }
    }

}

void print_all_array(int **a, int n, int m){

    int i, ii;

    for(i=0; i<n; i++){
        for(ii = 0; ii<n; ii++)
            print_array(&a[i][ii], m);
    }
}

void print_array(int *a, int m){
    int i;

    for(i =0; i<m; i++)
        printf("%d ", a[i]);
    printf("\n");

}
