#include <stdio.h>
void swap(int *a, int *b);
void sort(int *a, int m);
void print_array(int *a, int m);
void all_sort(int a[][100], int n, int m);
void print_all_array(int a[][100], int n, int m);

int main(void){
    
    int n, m;
    int ary[100][100];
    int i, j;

    scanf("%d %d", &n, &m);

    for(i = 0; i<n; i++){
        for(j = 0; j<m; j++)
            scanf("%d", &ary[i][j]);
    }

    all_sort(ary, n, m);
    print_all_array(ary, n, m);



    return 0;
}


void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;

}

void sort(int *a, int m){
    
    int i, j;

    for(i = 0; i<m; i++){
        for(j = 0; j<m-i-1; j++){
            if(a[j] > a[j+1]) swap(a+j, a+j+1);
        }
    }

}

void print_array(int *a, int m){
    
    int i;

    for(i = 0; i<m; i++)
        printf("%d ", *(a+i));
    printf("\n");
}

void all_sort(int a[][100], int n, int m){
    
    for(n -= 1; n>= 0; n--){
        sort(a[n], m);
    }
}

void print_all_array(int a[][100], int n, int m){
    
    int i, j;

    for(i = 0; i<n; i++){
        for(j = 0; j<m; j++)
            printf("%d ", a[i][j]);
        printf("\n");

    }

}
