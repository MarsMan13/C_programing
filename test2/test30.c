#include <stdio.h>
#include <stdlib.h>



int main(void){

    char ary[11];

    scanf("%[0123456789]", ary);
    printf("%s\n", ary);

    while(getchar() != '\n');

    scanf("%s", ary);
    printf("%s\n", ary);

    printf("\n|%d|\n", getchar());

    return 0;
}
