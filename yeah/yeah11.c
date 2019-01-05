#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);

    switch(n/10)
    {
    case 0 :
        printf("0\n");
        break;
    case 1 :
        printf("1\n");
        break;
    case 2 :
        printf("2\n");
        break;
    default :
        printf("3이상\n");
        break;
        
    }
    
    return 0;
}
