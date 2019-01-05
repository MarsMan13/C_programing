#include <stdio.h>
#include <string.h>


int main(void){

    char str1[4] = "Wow";
    char str2[10];
    int i;

    
    strncpy(str2, str1, 2);
    for(i = 0; i<10; i++){
        printf("%d; d: %d, c: %c\n", i, str2[i], str2[i]);
    }
    printf("\n\n%s\n", str2);    

    return 0;
}
