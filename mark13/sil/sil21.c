#include <stdio.h>

int main(void)
{
	int n;
	int m;
	int nn = 1;
	int count = 1;
	
	printf("Input: ");
	scanf("%d", &n);
	m = n;
	
	while(m >= 1)
	{
		while(count <= m)
		{
			printf(" ");
			count++;
		}
		m -= 1;
		count = 1;
		
		while(count <= nn)
		{
			printf("*");
			count++;
		}
		count = 1;
		nn += 2;
		
		printf("\n");
	}
	

	return 0;
}
