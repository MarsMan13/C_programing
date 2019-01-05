#include <stdio.h>
void swap(int *a, int *b);
void sort(int *a, int m);
void all_sort(int a[][100], int n, int m);
int binary_search(int *a, int *endPtr, int key, int **findPtr);
int all_binary_search(int a[][100], int n, int m, int key, int **findPtr);

int main(void){

    int ary[100][100];
    int n, m;
    int k;
    int i, j;
    int *p;

    scanf("%d %d %d", &n, &m, &k);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &ary[i][j]);
        }
    }
    
    all_sort(ary, n, m);
    printf("%d\n", all_binary_search(ary, n, m, k, &p));


    return 0;
}


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *a, int m){
    int i, j;
    for(i = 0; i<m; i++){
        for(j = 0; j<m-i-1; j++){
            if(a[j] > a[j +1]){
                swap(&a[j], &a[j+1]);
            }

        }
    }

}

void all_sort(int a[][100], int n, int m){
    int i;
    for(i = 0;i<n;i++)
        sort(*(a+i), m);
}

int binary_search(int *a, int *endPtr, int key, int **findPtr){

    int *mid;
    int *init = a;

    while(init<=endPtr){
        mid = init + (endPtr - init)/2;
        
        if(*mid == key) return 1;
        else if(*mid > key){
            endPtr = mid -1;
        }
        else if(*mid < key){
            init = mid +1;
        }

    }
    return 0;


}

int all_binary_search(int a[][100], int n, int m, int key, int **findPtr){
    int i;
    for(i = 0 ; i<n; i++){
        if(binary_search(*(a+i), (*(a+i)+m-1), key, findPtr)== 1)
                return 1;
    }
    return 0;

}





