#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    char str1[11] = "abc";
    char *p;
    
//    str1 = "ttt";
    
    p = "ttt";
    printf("%s\n", p);

    strcpy(str1, p);
    printf("%s\n", str1);


    return 0;
}
