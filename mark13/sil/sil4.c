#include <stdio.h>

int main(void)
{	
	int price, payment6;
	printf("Price : ");
	scanf("%d", &price);
	payment6 = (int)(price*1.05*1.05*1.05);
	printf("----------------output---------------\n");
	printf("Month\t\t:%10d%10d\n", 3, 6);
	printf("Payment\t\t:%10d%10d\n", price, payment6);
	printf("-------------------------------------\n");
	printf("Pay/month	:%10.2f%10.2f\n",((float)price)/3,((float)payment6)/6);

	return 0;


}
