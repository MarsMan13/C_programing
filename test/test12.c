#include <stdio.h>

int main(void)
{
    char str[50];
    int idx=0;

    printf("Enter the str : ");
    scanf("%s", str);
    printf("Entered the str : %s \n", str);

    printf("문자 단위 출력 : ");
    while(str[idx] != '\0')
    {
        printf("%c", str[idx]);
        idx++;
    }

    printf("\n");

    return 0;

}
