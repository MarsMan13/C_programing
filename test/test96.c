#include <stdio.h>
#include <string.h>


int main(void){

    char str1[] = "Hello";
    char str2[1];
    char str3[5];
    
    printf("str1: |%p|\nstr2: |%p|\nstr3: |%p|\n", str1, str2, str3);

    printf("%d\n\n", strlen(str1));
    
    strncpy(str2, str1, 4);
    printf("str2: %p\n", &str2[3]);
    printf("%s\n", str2);
    printf("%s\n", str3);

    return 0;
}
