#include <stdio.h>

int main(void){

    int ary[6] = {1,2,3,4,5,6};
    int *p1 = &ary[0], *p2 = &ary[5];
    int n = 0;
    int temp;

    while(n != 2){
        temp = *(p1+n);
        *(p1+n) = *(p2-n);
        *(p2-n) = temp;
        n++;
    }

    for(n=0; n<6; n++)
        printf("%d ", ary[n]);
    printf("\n");


    return 0;
}
