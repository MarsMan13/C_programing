#include <stdio.h>

int main(void){

    int n = 20;
    char *p;
    p = (char *)&n;

    printf("%d\n", n);
    printf("%c\n", *p);

    return 0;
}
