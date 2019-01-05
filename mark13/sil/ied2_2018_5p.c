#include <stdio.h>

int sqr(int);
int printOne(int);

int main(void)
{
	int input;
	printf("Input : ");
	scanf("%d", &input);
	sqr(input);
}

int sqr(int input)
{
	int result;
	result = input * input;
	printOne(result);
	return 0;	

}

int printOne(int result)
{
	printf("Result : %d\n", result);
	return 0;
}
