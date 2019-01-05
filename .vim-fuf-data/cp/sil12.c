#include <stdio.h>
int def1(int ary[99][9], int, int, int);

int main(void){

    int ary[99][9] = {0};
    int H,W,N;

    scanf("%d %d %d", &H, &W, &N);

    printf("%d\n", def1(ary, H, W, N));


    return 0;
}

int def1(int ary[99][9], int h, int w, int n){
    int m, mm;
    int nn = 1;
    for(m = 0; m<w; m++){
        for(mm = 0; mm<h; mm++){
            ary[m][mm] = nn;
            if(nn == n) return (100*(mm+1)+(m+1));
            nn++;
        }
    }
}
