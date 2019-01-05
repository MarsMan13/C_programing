#include <stdio.h>

int main(void)
{
    int a, b, c;
    int sum;
    float mean;
    double variance;

    printf("Enter the 3_n : ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    printf("Sum is : %d\n", sum);

    mean = (float)sum / 3;
    printf("Mean is : %f\n", mean);

    printf("%f %f\n\n", 5/3.0, 5/3);


    return 0;
}
