#include <stdio.h>


int main(void){

    int a, b, c;
    int *pa, *pb, *pc;
    int *big, *small;

    scanf("%d %d %d", &a, &b, &c);

    pa = &a;
    pb = &b;
    pc = &c;

    big = (*pa > *pb)? pa:pb;
    big = (*big > *pc)? big:pc;

    small = (*pa < *pb) ? pa:pb;
    small = (*small < *pc)? small:pc;

    printf("%d %d\n", *small, *big);
    printf("%p %p\n", small, big);

    return 0;
}
