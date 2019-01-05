#include <stdio.h>


int main(void){

    char greeting[] = "Hello";
    char *ptr;

    ptr = greeting;
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    
    
    ptr = greeting;
    
    printf("%s\n", ptr+2);

    return 0;
}
