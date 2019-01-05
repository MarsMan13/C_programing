#include <stdio.h>

int main(void)
{
    for(int i = 0 ; i <4 ; i++)
    {
        for(int j = 1 ; j <10 ; j++)
            printf("%d * %d = %d\n", i, j, i*j);
    }

    return 0;
}
