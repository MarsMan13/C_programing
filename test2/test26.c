#include <stdio.h>
#include <string.h>


int main(void){

    char *p = "Its a Pointer";
    char ary[20] = "Its a array";
    char ary2[20] = "Its a array2";

    strcpy(p, ary2[0]);

    printf("p : %s\n", p);


    return 0;
}
