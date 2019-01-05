#include <stdio.h>

int main(void){

    int num1 = 10, num2 = 20, num3 = 30;
    int *p1 = &num1;
    int *p2 = &num2;
    int *p3 = &num3;

    int *pary[] = {p1, p2, p3};
    int **pp = pary;

    printf("%d %d %d \n", *(pary[0]), *(pary[1]), *(pary[2]));
    printf("%d %d %d \n", **(pp+0), **(pp+1), **(pp+2));

    return 0;
}
