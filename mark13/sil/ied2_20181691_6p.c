#include <stdio.h>

int sum(int, int);

int main(void)
{
	int first_number;
	int second_number;
	int goal;	

	printf("Input first number : ");
	scanf("%d", &first_number);
	printf("Input first number : ");
	scanf("%d", &second_number);

	goal= sum(first_number, second_number);
	printf("%d + %d = %d\n", first_number, second_number, goal);

}

int sum(int first_number, int second_number)
{
	int result;
	result = first_number + second_number;
	return result;	


}

