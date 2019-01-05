#include <stdio.h>
void func_gcd(int, int, int *);

int main(void)
{
    int a, b;
    int gcd;

    printf("Input first number: ");
    scanf("%d", &a);
    printf("Input second number: ");
    scanf("%d", &b);

    if(a >= b)
        func_gcd(a, b, &gcd);
    else
        func_gcd(b, a, &gcd);
    

    printf("GCD: %d\n", gcd);

    return 0;
}

void func_gcd(int a, int b, int *gcd)
{   
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }

    *gcd = a;
}

