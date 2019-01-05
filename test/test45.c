#include <stdio.h>
void def(int *, int *);

int main(void){
    
    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;
    ptr1= &num1, ptr2 = &num2;
    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

    printf("%p %p\n", ptr1, ptr2);

    def(ptr1, ptr2);
    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

    return 0;
}

void def(int *p1, int *p2){

    printf("%p %p\n", p1, p2);
    int *temp = p1;
    p1 = p2;
    p2= temp;
    printf("%p %p\n", p1, p2);
    
}
