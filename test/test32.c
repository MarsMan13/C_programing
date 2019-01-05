#include <stdio.h>

int main(void){

    char ary[3]= "hel";

    for(int n = 0 ; n <3 ; n++)
        printf("%c\n", ary[n]);


    printf("%c\n", ary[3]);
    printf("%c\n", ary[4]);
    return 0;
}
