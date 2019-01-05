#include <stdio.h>

int main(void)
{
    int gl = 10000;
    int temp = 10;
    int num;

    scanf("%d", &num);

    printf("%d\n", num/temp - (int)(num/(10*temp))*10);

    printf("%d\n", (num/(gl/temp)) - ((int)((num/(gl/temp))/10))*10);

    return 0;
}
