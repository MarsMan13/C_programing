#include <stdio.h>


int main(void){

    int a,b,c;
    int *pa, *pb, *pc;
    int *high, *row;

    scanf("%d %d %d", &a, &b, &c);

    pa = &a;
    pb = &b;
    pc = &c;

    high = (*pa > *pb) ? pa : pb;
    high = (*pc > *high) ? pa : high;

    row = (*pa < *pb) ? pa : pb;
    row = (*pc < *high) ? pc : high;

    printf("%d %d\n", *high, *row);

    return 0;
}
