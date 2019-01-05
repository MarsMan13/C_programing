#include <stdio.h>

int main(void)
{
    int i[10];
    int n = 0;
    int temp = 0;
    int max = 0, min = 0;
    
    printf("Input (10 numbers): ");
    scanf("%d%d%d%d%d%d%d%d%d%d", &i[0], &i[1], &i[2],&i[3],&i[4],&i[5],&i[6],&i[7],&i[8],&i[9]);

    for(n ; n<5 ; n++)
    {
        temp = i[9-n];
        i[9-n] = i[n];
        i[n] = temp;
    }

    
    printf("%d %d %d %d %d %d %d %d %d %d\n", i[0], i[1],i[2],i[3],i[4],i[5],i[6],i[7],i[8],i[9]);

    //
    for(n = 0 ; n<10 ; n++)
    {
        if(max <= i[n])
        {
            max = i[n];
        }
    }
    
    for(n = 0 ; n<10 ; n++)
    {
        if(min >= i[n])
        {
            min = i[n];
        }
    }

    printf("Max: %d, Min: %d\n", max, min);

    return 0;
}
