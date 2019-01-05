#include <stdio.h>
float x_func(int, int, int, int);
float y_func(int, int, int, int);

int main(void)
{
	int a, b, c, d;
	float xx, yy;


	printf("1st equation: y = ax - b, input 'a' and 'b'\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("2nd equation: y = cx - d, input 'c' and 'd'\n");
	printf("c = ");
	scanf("%d", &c);
	printf("d = ");
	scanf("%d", &d);
	
	xx = x_func(a, b, c, d);
	yy = y_func(a, b, c, d);

	printf("result:\n");
	printf("x is %f\n", xx);
	printf("y is %f\n", yy);

	return 0;
}

float x_func(int a, int b, int c, int d)
{
	float xx;
	xx = (float)(b-d)/(float)(a-c);
	return xx;

}

float y_func(int a, int b, int c, int d)
{
	float yy;
	yy = a*((float)(b-d)/(float)(a-c))-b;
	return yy;

}
