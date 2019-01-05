#include <stdio.h>

typedef union{

    int num1;
    int num2;
    double num3;

}val;


int main(void){

    val x;
    x.num1 = 1000000;
    
    printf("%d\n", x.num1);
    printf("%d\n", x.num2);
    printf("%lf\n", x.num3);

    
    return 0;
}
