#include <stdio.h>
#include <string.h>


int main(void){

    char str1[] = "Ary: Its str1";
    char str2[] = "Ary: Its str2";
 
    char *p1 = "P: Its str1";
    char *p2 = "P: Its str1";

    printf("%s\n", strncat(p1, str1, 3));

    return 0;
}
