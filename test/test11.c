#include <stdio.h>

int main(void)
{
    char str[] = {'G', 'o', 'o', 'd'};
    int arrlen = sizeof(str) / sizeof(char);
    
    printf("%d", arrlen);

    for(int i = 0 ; i<arrlen ; i++)
        printf("%c", str[i]);

    printf("\n");
    
    return 0;

}
