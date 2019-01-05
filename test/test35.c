#include <stdio.h>

int main(void){

    int num = 10;
    int *p1 = &num;
    int *p2= p1;

    (*p1)++;
    (*p2)++;
    printf("%d\n", num);



    return 0;
}
