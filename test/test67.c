#include <stdio.h>


int main(void){

    int n = 10;
    int *ptr = &n;
    int **dptr = &ptr;
    int ***ddptr = &dptr;

    if(*ddptr == *(&dptr))
        printf("True\n");
    
    
    printf("*********\n");
    printf("&n : %p\n", &n);
    printf("n : %d\n", n);
    printf("&ptr : %p\n", &ptr);
    printf("ptr : %p\n", ptr);
    printf("&dptr : %p\n", &dptr);
    printf("dptr : %p\n", dptr);
    printf("&ddptr : %p\n", &ddptr);
    printf("ddptr : %p\n", ddptr);


    printf("*********\n");
    printf("***ddptr : %d\n", ***ddptr);
    printf("**ddptr : %p\n", **ddptr);
    printf("*ddptr : %p\n", *ddptr);
    printf("ddptr : %p\n", ddptr);

    return 0;
}
