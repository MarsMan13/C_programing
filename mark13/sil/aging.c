#include <stdio.h>

int main(void)
{
	int birth, month, day, year, age;
	
	printf("Birthday : ");
	scanf("%4d%2d%2d", &birth, &month, &day);
	
	printf("Your birthday is %d / %d / %d\n", birth, month, day);
	printf("Year : ");
	scanf("%d", &year);
	age = year - birth + 1;
	printf("In %d, your age is %d\n", year, age);

	return 0;
	

}

