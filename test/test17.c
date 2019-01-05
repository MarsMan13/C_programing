#include <stdio.h>

int main(void)
{
    double r1, r2;
    int result1, result2;

    r1 = 3.4;
    r2 = 2.1;

    result1 = r1 * r2;
    result2 = (int)r1 * (int)r2;

    printf("result1 = %f\n", result1);
    printf("result2 = %f\n", result2);
    printf("r1 : %lf\n", r1);

    return 0;


}
