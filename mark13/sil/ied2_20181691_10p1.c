#include <stdio.h>

void swap( float *x, float *y);
 
int main(void)
{
	float xn,yn;

    printf("Input two Number\n");
	printf("\tx : ");
	scanf("%f",&xn);
	printf("\ty : ");
	scanf("%f",&yn);
	printf("-----------------------------\n");
	printf("Before : x [%.0f] y [%.0f]\n",xn,yn);
	printf("-----------------------------\n");
	swap(&xn,&yn);
	printf("After  : x [%.0f] y [%.0f]\n",xn,yn);
	
    return 0; 
}


void swap( float *x, float *y)
{
	
    float result;

    result=*x;
	*x=*y;
	*y=result;
}
