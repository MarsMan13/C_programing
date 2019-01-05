#include <stdio.h>

int main(void)
{
    int num;

    printf("Input : ");
    scanf("%d", &num);
    
    printf("%d is %s number.\n", num,(num%2 == 0) ? "even" : "odd");

    return 0; 
}
