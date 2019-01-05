#include <stdio.h>
void def(char i[]);

int main(void)
{
    char i[50];
    int n;

    for(n = 0; n < 50; n++)
    {
        scanf("%c", &i[n]);
        if(i[n] == '\n')
            break;
    }

    def(i);
    
    for(n = 0; n <= 50 ; n++)
    {
        if(i[n] == '\n' || n == 50)
        {
            printf("\n");
            break;
        }
        printf("%c", i[n]);
    }


    return 0;
}

void def(char i[])
{
    int n;

    for(n = 0; n < 50; n++)
    {
        if(i[n] == '\n')
            break;
        if((int)i[n] >= 97 && (int)i[n] <= 122)
            i[n] = ((int)i[n]) - 32;
    }

}
