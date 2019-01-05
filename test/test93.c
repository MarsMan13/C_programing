#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(void){

    char str[100];

    while(fgets(str, sizeof(str), stdin) != NULL){
        if(str[0]>= 'A' && str[0] <= 'Z'){
            fputs(str, stdout);
        }
    }

    return 0;
}
