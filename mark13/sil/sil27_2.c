#include <stdio.h>

int main(void)
{
    int n;
    int m;


    scanf("%d", &n);

    int i[n];

    for(m = 1 ; m <= n ; m++)
    {
        i[m-1] = m;
        printf("%d ", i[m-1]);
        if(m == 5)
            printf("\n");
    }

    int ii[n];

    for(m = 1 ; m <= n ; m++)
    {
        ii[m-1] = i[m-1]*i[m-1];
        printf("%d ", ii[m-1]);

        if(m == 5)
            printf("\n");
    }

    int iii[n];

    for(m = 1 ; m <= n ; m++)
    {
        iii[m-1] = ii[m-1] * i[m-1];
        printf("%d ", iii[m-1]);

        if(m == 5)
            printf("\n");
    }

    return 0;
}
