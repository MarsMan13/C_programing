#include <stdio.h>

int x;
int Fibonacci(int*);

int main(void)
{
    int x=1;

    printf("Fibo(2): %d\n", Fibonacci(&x));
    printf("Fibo(3): %d\n", Fibonacci(&x));
    printf("Fibo(4): %d\n", Fibonacci(&x));
    printf("Fibo(5): %d\n", Fibonacci(&x));
    printf("Fibo(6): %d\n", Fibonacci(&x));
    printf("Fibo(7): %d\n", Fibonacci(&x));
    printf("Fibo(8): %d\n", Fibonacci(&x));
    printf("Fibo(9): %d\n", Fibonacci(&x));

    return 0;

}

int Fibonacci(int*y)
{
    int t=*y;
    *y=x+(*y);
    x=t;

    return *y;

}
