#include <stdio.h>

int main(void)
{
	int a;
	
	printf("Enter score : ");
	scanf("%d", &a);

	if(90<=a)
		printf("A\n");

	else if(80<=a)
		printf("B\n");

	else if(70<=a)
		printf("C\n");

	else if(60<=a)
		printf("D\n");

	else
		printf("F\n");

	return 0;



}
