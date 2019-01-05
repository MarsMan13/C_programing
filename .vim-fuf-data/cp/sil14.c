#include <stdio.h>
void swap(int *a, int *b);
void sort(int *a, int m);
void all_sort(int a[][100], int n, int m);
int binary_search(int *a, int *endPtr, int key, int **findPtr);
int all_binary_search(int a[][100], int n, int m, int key, int **findPtr);


int main(void){
    
    int *findPtr;
    int N, M;
    int i=0, ii=0;
    int ary[100][100] = {0};
    int K;
    int ret;

    scanf("%d %d %d", &N, &M, &K);

    for(i=0; i<N; i++){
        for(ii=0; ii<M; ii++)
            scanf("%d", &ary[i][ii]);
    }
    
    all_sort(ary, N, M);
    
    ret = all_binary_search(ary, N, M, K, &findPtr);
    if(ret == 1){
        printf("%d\n", ret);
        printf("%p\n", findPtr);
    }
    else
        printf("%d\n", ret);

    return 0;
}


void all_sort(int ary[][100], int n, int m){

    int i;
    for(i=0; i<n; i++)
        sort(*(ary+i), m);
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

int binary_search(int *a, int *endPtr, int key, int **findPtr){
    
    int *str = a;
    int *med = str + (endPtr-str)/2;
    
    while(str <= endPtr){
        med = str + (endPtr-str)/2;

        if(*med == key){
            str = endPtr + 1;
            *findPtr = med;
        }
        if(key > *med){
            str = med + 1;
        }
        if(*med > key){
            endPtr = med - 1;
        }
    }
    
    return (key == *med);
}

int all_binary_search(int a[][100], int n, int m, int key, int **findPtr){

    int i;
    int *endPtr;
    int answer = 1;
    for(i = 0; i<n; i++){
        endPtr = &a[i][m-1];
        answer = binary_search(a[i], endPtr, key, findPtr);
        if(answer == 1) return 1;
    }
    return answer;
}

