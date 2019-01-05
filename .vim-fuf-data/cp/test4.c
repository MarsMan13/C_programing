#include <stdio.h>


int main(void){

    int a= 0;
    int *p= &a;
    int **q= p;
    int ***r= q;


    printf("%p\n", p);
    printf("%p\n", q);
    printf("%p\n", r);
    
    return 0;
}
