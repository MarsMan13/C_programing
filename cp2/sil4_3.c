#include <stdio.h>


int main(void){
    
    int h, w;
    int x;
    int ary[99][9];
    int i, j;
    int count = 1;

    scanf("%d %d %d", &h, &w, &x);

    for(i = 0; i<w; i++){
        for(j = 0; j<h; j++){
            ary[i][j] = count;
            if(count == x) printf("%d\n", (j+1)*100 + (i+1));
            count++;
        }
    }

    return 0;
}
