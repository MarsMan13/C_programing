#include<stdio.h>
int check(char binary[100]);
int biToDec(char binary[100]);
int main(void)
{
	char binary[100];
	int result;
	printf("Enter binary number : ");
	scanf("%s", binary);
	if(check(binary)==1)
	{
		result = biToDec(binary);
		printf("Demical number : %d", result);
	}
	else
	{
		printf("Invalid binary number");
	}
	printf("\n");
	return 0;
}
int check(char binary[100])
{	int i, j;
	for(i=0;i<100;i++)
	{
		if(binary[i] == '\0')
		{
			for(j=0;j<i;j++)
			{
				if(binary[j] == '0' || binary[j] == '1')
				{
					;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
}
int biToDec(char binary[100])
{
	int i,j,k,result = 0,cnt;
	int res[100];
	for(i=0;i<100;i++)
	{
		if(binary[i] == '\0')
		{
			cnt=i-1;
			for(j = 0; j<i; j++)
			{
				res[j] = (binary[j]-'0');
				for(k = 0; k <cnt; k++)
				{
					res[j] *= 2;
				}
				cnt--;
			}
			for(j = 0; j <= i-1; j++)
			{
				result += res[j];
			}
			break;
		}
	}
	return result;
}
