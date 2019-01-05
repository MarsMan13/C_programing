#include <stdio.h>

int main(void)
{
	int n = 0, pass = 0;
	int count= 0;
	int temp = 0;
	int total= 0;
	int failures = 0;
	float avg = 0;
		
	printf("Number of class: ");
	scanf("%d", &n);
	printf("Cutline: ");
	scanf("%d", &pass);
	
	while((count+1) <= n)
	{
		printf("Input score #%d: ", count);
		scanf("%d", &temp);
		if (temp < pass)
			{
				failures++;
			}
		total += temp;
		avg = (1.0)* total / (count +1);
		count++;
	}
	
	printf("Average score: %.2f\n", avg);
	printf("Number of failures: %d\n", failures);
	
	
	return 0;
}
