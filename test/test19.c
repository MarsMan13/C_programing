#include <stdio.h>

int devide(int, int);
int remainderr(int, int);

int main(void)
{
    int n1, n2;
    int calc;

    printf("Enter teh 2_n : ");
    scanf("%d %d", &n1, &n2);

    calc = devide(n1, n2);
    printf("%d / %d = %d", n1, n2, calc);

    calc = remainderr(n1, n2);
    printf(" with a remainder of : %d\n", calc);

    return 0;
}

int devide(int n1, int n2)
{
    int result;
    result = n1 / n2;

    return result;
}

int remainderr(int n1, int n2)
{
    int result;
    result = n1 % n2;

    return result;
}
