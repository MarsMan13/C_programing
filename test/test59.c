#include <stdio.h>



int main(void){
    
    int num1 = 1, num2 = 2, num3= 3;
    int *p1 = &num1;
    int *p2 = &num2;
    int *p3 = &num3;

    int *pary[] = {p1, p2, p3};
    int **pp = pary;




    return 0;
}
