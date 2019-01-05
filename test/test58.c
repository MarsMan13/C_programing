#include <stdio.h>


int main(void){

    int num = 10;
    int num2 = 20;
    int *p = &num;
    int **pp = &p;

    printf("&num : %p\n&num2 : %p\n", &num, &num2);
    printf("&p : %p\n", &p);
    printf("p : %p\n", p);
    printf("*p : %d\n\n", *p);
    printf("pp : %p  *pp : %p  **pp : %d\n\n", pp, *pp, **pp);


    return 0;
}
