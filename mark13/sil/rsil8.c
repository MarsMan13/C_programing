#include <stdio.h>

float average(int, int, int, int);
float deviation(int, float);

int main(void)
{
    int a,b,c,d;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the first numver : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);
    printf("Enter the fourth number : ");
    scanf("%d", &d);
    float avg = average(a,b,c,d);

    printf("******** average is %.2f ********\n", avg);
    printf("first number : \t\t%10d -- devation : \t%10.2f\n", a, deviation(a,avg));
    printf("second number : \t%10d -- devation : \t%10.2f\n", b, deviation(b, avg));
    printf("third number : \t\t%10d -- devation : \t%10.2f\n", c, deviation(c, avg));
    printf("fourth number : \t%10d -- devation : \t%10.2f\n", d, deviation(d, avg));

    return 0;


}

float average(int a, int b, int c, int d)
{
    return (a+b+c+d)/4.0;
}


float deviation(int a, float avg)
{
    return a-avg;
}
