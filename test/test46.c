#include <stdio.h>
void def(int **, int **);

int main(void){
    
    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;
    ptr1= &num1, ptr2 = &num2;
    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

    def(&ptr1, &ptr2);

    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

    return 0;
}

void def(int **pp1, int **pp2){

    int temp = **pp1;
    **pp1 = **pp2;
    **pp2= temp;
    
}
