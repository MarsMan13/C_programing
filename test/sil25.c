#include <stdio.h>
int isDivisor(int, int);
int isPrime(int);

int main(void)
{
    int m;
    int n=1;
   
    printf("Input : ");
    scanf("%d", &m);
    

    for(n=1 ; n<=m ; n++)
    {   

        if(isDivisor(m, n) == 1 && isPrime(n) == 1)
        {
            printf("%-8d", n);
        }
        if(n == m)
        {
            printf("\n");
        }
    }
    return 0;
}

int isDivisor(int m, int n)
{
    return (m%n == 0) ? 1 : 0;
}

int isPrime(int m)
{
    int i = 1;
    int count = 0;
    for(i = 1 ; i <= m ; i++)
    {
        if(m%i == 0)
        {
            count++;
        }
    }

    return (count == 2) ? 1 : 0;
}
