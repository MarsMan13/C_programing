#include <stdio.h>

int main(void)
{
    int i[5], ii[5];
    int n = 0;
    int jud = 0;

    scanf("%d%d%d%d%d", &i[0], &i[1], &i[2], &i[3], &i[4]);
    scanf("%d%d%d%d%d", &ii[0], &ii[1], &ii[2], &ii[3], &ii[4]);

    for(n = 0; n <5; n++)
    {
        if(i[n] == ii[n])
            jud = 1;
        else
        {
            printf("false\n");
            return 0;
        }   
    }
    

    printf("true\n");

    return 0;
}
