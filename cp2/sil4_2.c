#include <stdio.h>
void def(int a[][100], int n);
void mat_mul(int a[][100], int b[][100], int c[][100], int n);

int main(void){

    int a[100][100], b[100][100], c[100][100]={0};
    int n;
    int i, j;

    scanf("%d", &n);

    def(a, n);
    def(b, n);
    mat_mul(a, b, c, n);

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++)
            printf("%d ", *(*(c +i)+j));
        printf("\n");
    }

    return 0;
}


void def(int a[][100], int n){
    
    int i, j;

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++)
            scanf("%d", *(a+i)+j);
    }

}

void mat_mul(int a[][100], int b[][100], int c[][100], int n){
    
    int i, j, k;

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            for(k = 0; k<n; k++){
               *(*(c + i)+j) += *(*(a + i)+k)* *(*(b+k)+j); 
            }
        }
    }
    return;
}
