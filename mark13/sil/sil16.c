#include <stdio.h>

int main(void)
{
    int num1, num2;
    int one1, ten1, hund1;
    int one2, ten2, hund2;
    int count= 0;

    printf("Enter 2 number: ");
    scanf("%d %d", &num1, &num2);
    
    
    hund1 = (int)(num1 /100);
    ten1 = (int)(num1 / 10) - 10* hund1;
    one1 = num1 - hund1 *100 - ten1 *10;
    
    hund2 = (int)(num2 /100);
    ten2 = (int)(num2 / 10) - 10* hund2;
    one2 = num2 - hund2 *100 - ten2 *10;


    count += ((one1 +one2)>=10) ? 1 : 0;
    count += ((ten1 +ten2)>=10) ? 1 : 0;
    count += ((hund1 +hund2)>=10) ? 1 : 0;

    printf("%d carry operations\n", count);

    return 0;
}
