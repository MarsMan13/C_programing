#include <stdio.h>

int main(void)
{
    int n;
    int i[20][20];
    int j, jj;

    printf("input size of triangle : ");
    scanf("%d", &n);

    for(j=0 ; j<=(n-1) ; j++)
    {
        for(jj=0 ; jj<=j ; jj++)
        {   
            if(jj == 0)
                i[j][jj] = 1;
            else if(jj == j)
                i[j][jj] = 1;
            else
                i[j][jj] = i[j-1][jj-1] + i[j-1][jj];
            
            
			printf("%-6d", i[j][jj]);

            if(jj == j)
                printf("\n");
        }
    }

    return 0;
}
