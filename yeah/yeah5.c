#include <stdio.h>

int main(void)
{
    double x, y;
    double xy1, xy2;

    printf("Enter teh x, y : ");
    scanf("%lf %lf", &x, &y);

    xy1 = x+y;
    xy2 = x-y;

    printf("x+y = %lf\n", xy1);
    printf("x-y = %lf\n", xy2);



    return 0;
}
