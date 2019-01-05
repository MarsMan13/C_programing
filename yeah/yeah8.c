#include <stdio.h>
void fac(int);
int goal= 1;

int main(void)
{
    int n;

    printf("Enter the n : ");
    scanf("%d", &n);

    fac(n);

    return 0;
}

void fac(int n)
{
    
    if(n<=0)
    {
        printf("n fac is %d\n", goal);
        return;
    }

    goal*=n;
    fac(n-1);

}
