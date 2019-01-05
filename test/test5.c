#include <stdio.h>

int main(void)
{
	int count;
	int num;
	for(count = 1 ; count<=100 ; count++)
	{	
        num += 1;
		if(count%7==0 || count%9==0)
			printf("%d\n", num);
	}
	return 0;


}

