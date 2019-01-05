#include <stdio.h>
int def(int *);
int y = 1;

int main(void)
{
    int y= 2;
    
    printf("Factorial<%d>: %d\n", def(&y), y);
    printf("Factorial<%d>: %d\n", def(&y), y);
    printf("Factorial<%d>: %d\n", def(&y), y);
    printf("Factorial<%d>: %d\n", def(&y), y);
    printf("Factorial<%d>: %d\n", def(&y), y);
    printf("Factorial<%d>: %d\n", def(&y), y);
    printf("Factorial<%d>: %d\n", def(&y), y);
    printf("Factorial<%d>: %d\n", def(&y), y);
    printf("Factorial<%d>: %d\n", def(&y), y);
    printf("Factorial<%d>: %d\n", def(&y), y);
    



    return 0;
}

int def(int *yy)
{
    printf("y = %d\n", *yy);
    *yy = *yy * (y++);
    printf("y = %d\n", *yy);
    
    return y;
}
