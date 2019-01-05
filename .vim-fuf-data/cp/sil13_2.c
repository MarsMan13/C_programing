#include <stdio.h>
void swap(int *a, int *b);
void sort(int *a, int m);
void print_array(int *a, int m);
void all_sort(int a[][100], int n, int m);
void print_all_array(int a[][100], int n, int m);

int main(void){
    
    int N, M;
    int i=0, ii=0;
    int ary[100][100] = {0};

    scanf("%d %d", &N, &M);

    for(i=0; i<N; i++){
        for(ii=0; ii<M; ii++)
            scanf("%d", &ary[i][ii]);
    }
    
    all_sort(ary, N, M);

}

void all_sort(int ary[][100], int n, int m){

    int i;
    for(i=0; i<n; i++)
        sort(*(ary+i), m);

    print_all_array(ary, n, m);
}

void sort(int *a, int m){

    int i, ii;
    for(i = m-1; i>0; i--){
        for(ii = 0; ii<i; ii++){
            if(*(a+ii) > *(a+ii+1))
                swap(a+ii, a+ii+1);
        }
    }
}

void swap(int *a, int *b){
    
    int temp = *b;
    *b = *a;
    *a = temp;
}

void print_all_array(int a[][100], int n, int m){
    
    int i, ii;
    
    for(i=0; i<n; i++){
        print_array(*(a+i), m);
    }
}

void print_array(int *a, int m){
    
    int i;

    for(i = 0; i<m; i++)
        printf("%d ", *(a+i));
    printf("\n");
}
