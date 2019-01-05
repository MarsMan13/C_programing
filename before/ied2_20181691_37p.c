#include <stdio.h>
void merge(int ary1[5], int ary2[5], int ary3[10]);

int main(void)
{
	int ary1[5], ary2[5];
	int ary3[10];
	int i;
	
	printf("Input arrayA: ");
	for(i = 0; i<5; i++)
	{
		scanf("%d", &ary1[i]); 
	}
	
	printf("Input arrayB: ");	
	for(i = 0; i< 5; i++)
	{
		scanf("%d", &ary2[i]);
	}

	merge(ary1, ary2, ary3);
	
	printf("Merged array: ");
	for(i = 0 ; i <10 ; i++)
		printf("%d ", ary3[i]);
	
	printf("\n");
	
	return 0;
}

void merge(int ary1[5], int ary2[5], int ary3[10])
{
	int i, j;
	int temp;
	
	for(i = 0; i<5; i++)
		ary3[i] = ary1[i];
	for(i = 0; i<5; i++)
		ary3[i+5] = ary2[i];
	
	for(i = 0; i<9; i++)
	{
		for(j = 0; j<(9-i); j++)
		{
			if(ary3[j]>= ary3[j+1])
			{
				temp = ary3[j];
				ary3[j] = ary3[j+1];
				ary3[j+1] = temp;
			}
		}	
	}	
	
}
