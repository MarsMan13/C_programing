#include <stdio.h>
int x= 0;
int fibo(int *);

int main(void)
{
    int x=1;        //*y

    printf("fibo(2): %d\n", fibo(&x));
    printf("fibo(3): %d\n", fibo(&x));
    printf("fibo(4): %d\n", fibo(&x));
    printf("fibo(5): %d\n", fibo(&x));
    printf("fibo(6): %d\n", fibo(&x));
    printf("fibo(7): %d\n", fibo(&x));
    printf("fibo(8): %d\n", fibo(&x));
    printf("fibo(9): %d\n", fibo(&x));

    return 0;

}

int fibo(int *y)
{

    int temp;
    temp = *y;
    *y = *y + x;
    x = temp;

    return *y;

}
