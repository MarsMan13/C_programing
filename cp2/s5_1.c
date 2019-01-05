#include <stdio.h>
#include <stdlib.h>
void def1(int (*p)[100], int n);
void add(int a[][100], int b[][100], int n);


int main(void){

    int ary1[100][100];
    int ary2[100][100];
    int n;
    int i, j;

    scanf("%d", &n);

    def1(ary1, n);
    def1(ary2, n);

    add(ary1, ary2, n);

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++)
            printf("%d ", *(*(ary1+i)+j));
        printf("\n");

    }

    return 0;
}

void def1(int (*p)[100], int n){
    
    int i, j;

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++)
            scanf("%d", *(p+i)+j);
    }

}
void add(int a[][100], int b[][100], int n){
        
    int i, j;

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++)
            *(*(a+i)+j) += *(*(b+i)+j);
    }

}



