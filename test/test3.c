#include <stdio.h>

int main(void)
{

	int num1, abs;
	
	printf("Enter num : ");
	scanf("%d", &num1);
	abs  = (num1>0) ? num1 : num1*(-1);


	printf("abs : %d\n", abs);

	return 0;

}
