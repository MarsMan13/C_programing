#include <stdio.h>


int main(void){

    char *p = "Hello";
    char ary[] = "Hello";

    printf("%s\n", p);
    printf("%s\n", ary);

    p = "World";
    ary[0] = "world";

    printf("%s\n", p);
    printf("%s\n", ary);

    return 0;
}
