#include<stdio.h>

int main(void)
{
	FILE* stream1;
	char alpha1, error;
	int alpha2[26]={0};
	int i = 0;
	int j = 0;
	stream1 = fopen("input_39.txt","r");
	
	for(i=0; ;i++)
	{
		error = fscanf(stream1,"%c", &alpha1);
		if(error == EOF)
		{
			break;
		}
		for(j=0;j<26;j++)
		{
			if(alpha1 == 'a'+ j || alpha1 == 'A'+ j)
			{
				alpha2[j] = alpha2[j] + 1;
			}
		}
	}
	for(i = 0; i < 26;i++)
	{
		printf("%c : %d\t", 'A'+i, alpha2[i]);
	}
	printf("\n");
	fclose(stream1);
	return 0;
}
