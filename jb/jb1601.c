#include <stdio.h>

int main(void)
{
    char a;
    int num;

    printf("대문자 하나를 입력하시오 : ");
    scanf("%c", &a);

    printf("%d\n", a);
    num = a - 65;
    printf("%d\n", num);

    printf("2진수 출력 결과 : %b\n", num);
    return 0;
}
