#include <stdio.h>
float average(int, int, int, int);
float deviation(int, float);

int main(void)
{
    int aa,bb,cc,dd;
    float averagee;

    printf("Enter the first number : ");
    scanf("%d", &aa);
    printf("Enter the first number : ");
    scanf("%d", &bb);
    printf("Enter the first number : ");
    scanf("%d", &cc);
    printf("Enter the first number : ");
    scanf("%d", &dd);
    
    averagee = average(aa, bb, cc, dd);

    printf("average is %f\n", averagee);
    printf("-----------------\n");

    printf("first number : %10d -- deviation : %10.2f\n", aa, deviation(aa, averagee));

    return 0;
}

float average(int aa, int bb, int cc, int dd)
{
    
    float average = ((aa+bb+cc+dd)/4.0);
    return average;

}

float deviation(int n, float average)
{
    return (average >= n) ? (average - n) : (n - average);
}
