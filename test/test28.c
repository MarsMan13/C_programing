#include <stdio.h>

int main(void)
{
    char i[50];
    int n = 0;

    for(n = 0 ; n < 50 ; n++)
        scanf("%c", &i[n]);

    for(n = 0 ; n < 50 ; n++)
        printf("%c", i[n]);

    return 0;
}
