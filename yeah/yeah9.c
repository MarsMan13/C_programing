#include <stdio.h>

int fac(int);

int main(void)
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, fac(n));

    return 0;
}

int fac(int n)
{
    if(n==0)
        return 1;
    else
    {
        return n * fac(n-1);
    }

}
