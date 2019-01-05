#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){

    char tell[11];

    scanf("%10s", tell);

    printf("%s\n", tell);
   
    flashf(stdin);
    scanf("%10[0123456789]", tell);
    
    printf("%s\n", tell);

    return 0;
}
