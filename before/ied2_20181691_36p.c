#include <stdio.h>

int main(void)
{
    int n;
    int i, ii;

    printf("Input: ");
    scanf("%d", &n);


	if(n%2== 0)
	{
		for(i=n/2; i>=1; i--)
		{
			for(ii=i; ii>=1; ii--)
				printf("*");
			for(ii=1; ii<=n/2 - i; ii++)
				printf(" ");
			for(ii=1; ii<=n/2 - i; ii++)
				printf(" ");
			for(ii=i; ii>=1; ii--)
				printf("*");
			printf("\n");
		}
		for(i=1; i<=n/2; i++)
		{
			for(ii=0; ii<i; ii++)
				printf("*");
			for(ii=0; ii<(n/2)-i; ii++)
				printf(" ");
			for(ii=0; ii<(n/2)-i; ii++)
				printf(" ");
			for(ii=0; ii<i; ii++)
				printf("*");
			printf("\n");
		}
		
	}
	else
	{
		for(i=n; i>0; i--)
			printf("*");
			printf("\n");
		for(i=(n+1)/2-1; i>=1; i--)
		{
			for(ii=i; ii>=1; ii--)
				printf("*");
			for(ii=n-i*2; ii>0; ii--)
				printf(" ");
			for(ii=i; ii>=1; ii--)
				printf("*");
			printf("\n");
		}
		
		for(i=2; i<(n+1)/2; i++)
		{
			for(ii = i; ii>0; ii--)
				printf("*");
			for(ii = 0; ii<n-i*2; ii++)
				printf(" ");
			for(ii = i; ii>0; ii--)
				printf("*");
	
			printf("\n");
		}
		for(i=n; i>0; i--)
			printf("*");
			printf("\n");
	}

    return 0;
}
