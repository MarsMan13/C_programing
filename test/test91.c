#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){

    char str[100];
    int i;

    printf("Please Enter a string: ");
    fgets(str, sizeof(str)/sizeof(char), stdin);
    printf("Here is your string: \n\t%s", str);

    printf("\n--------\n");

    for(i = 0; i<100; i++){
        printf("%d %c\n", i, str[i]);
    }
    printf("@@\n");

    return 0;
}
