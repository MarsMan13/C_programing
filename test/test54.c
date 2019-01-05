#include <stdio.h>
int result(int ary[9][99], int, int, int);


int main(void){
    
    int ary[9][99];
    int H, W, N;

    scanf("%d %d %d", &H, &W, &N);

    printf("%d\n", result(ary, H, W, N));


    return 0;
}

int result(int ary[9][99], int H, int W, int N){

    int i, j, p;
    int n = 1;

    ary[0][0]= 101;

    for(i=0; i<H; i++)
        ary[i+1][0]= ary[i][0] + 100;

    for(i=0; i<H; i++){
        for(j=0; j<W;j++)
            ary[i][j+1] = ary[i][j] + 1;

    }

    for(i = 0; i<W; i++){
        for(j = 0; j<H; j++){
            if(n++ == N)
                return ary[j][i];
        }
    }

}
