#include <stdio.h>
void mat_mul(int a[100][100], int b[100][100], int c[100][100], int);

int main(void){
    
    int n;
    int ary1[100][100]= {0};
    int ary2[100][100]= {0};
    int ary3[100][100]= {0};
    int m, mm;

    scanf("%d", &n);

    for(m = 0; m<n; m++){
        for(mm = 0; mm<n; mm++)
            scanf("%d", &ary1[m][mm]);
    }
    for(m = 0; m<n; m++){
        for(mm = 0; mm<n; mm++)
            scanf("%d", &ary2[m][mm]);
    }
    
    mat_mul(ary1, ary2, ary3, n);

    for(m = 0; m<n; m++){
        for(mm = 0; mm<n; mm++)
            printf("%d ", ary3[m][mm]);
        printf("\n");
    }

    return 0;
}


void mat_mul(int a[100][100], int b[100][100], int c[100][100], int N){
    
    int m, mm;
    int mmm = 0;
    int i;

    for(m = 0; m<N; m++){
        for(mm = 0; mm<N; mm++){
            for(i = 0; i<N; i++){
                c[m][mm] += a[m][i] * b[i][mm];
            }
        }
    }
}
