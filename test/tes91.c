#include <stdio.h>


int main(void){

    char str[100];

    printf("Please enter a string: ");
    gets(str);
    printf("Here is your string: \n\t%s", str);

    printf("\n");

    return 0;
}
