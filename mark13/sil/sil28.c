#include <stdio.h>
void def(char ary[]);

int main(void)
{
    char ary[50];
    int n = 0;

    for(n = 0 ; n<50 ; n++)
    {
        scanf("%c", &ary[n]);
        if(ary[n] == '\n');
            break;
    }
    def(ary);
    
    for(n = 0; n<50 ; n++)
        if(ary[n] != '\n')
        {
            printf("%c", ary[n]);
        }
        else
            break;
    return 0;
}

void def(char ary[])
{
    int n = 0;

    for(n = 0 ; n <50 ; n++)
    {
        if((int)ary[n] >= 97)
            ary[n] = ((int)ary[n]) - 32;
    }
}
