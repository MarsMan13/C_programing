#include <stdio.h>
float average_func(int, int, int, int);
float dev_func(float, int);


int main(void)
{
	int fir,sec, thir, four;
    float avg;

	printf("Enter the first number : ");
	scanf("%d", &fir);
	printf("Enter the second number : ");
	scanf("%d", &sec);
	printf("Enter the third number : ");
	scanf("%d", &thir);
	printf("Enter the fourth number : ");
	scanf("%d", &four);
	
    avg = average_func(fir, sec, thir, four);
    printf("********average is %f *********\n", avg);
    printf("first number : \t\t%10d -- devation : \t%10.2f\n", fir, dev_func(fir, avg));
    printf("second number : \t%10d -- devation : \t%10.2f\n", sec, dev_func(sec, avg));
	printf("thirth number : \t\t%10d -- devation : \t%10.2f\n", thir, dev_func(thir,avg));
    printf("fourth number : \t%10d -- devation : \t%10.2f\n", four, dev_func(four, avg));

    return 0;
}

float average_func(int a, int b, int c, int d)
{
	int tot;
	tot = a+b+c+d;
	return tot/4.0;
}

float dev_func(int a, float avg)
{
    return a-avg;
}
