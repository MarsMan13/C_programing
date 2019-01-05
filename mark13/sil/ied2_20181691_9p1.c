#include <stdio.h>

void divideRemainder(int*a,int*b);


int main(void)
{
	int first,second;

	printf("Input two Numbers :");
	scanf("%d %d",&first,&second);
	divideRemainder(&first,&second);
	printf("OUTPUT : divde [%d] remainder [%d]\n",first,second);

    return 0;
}

void divideRemainder(int*a,int*b)
{
	int result;

	result=*a;
	*a= *a / *b;
	*b=result%*b;
}
