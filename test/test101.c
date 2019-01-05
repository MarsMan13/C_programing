#include <stdio.h>
#include <string.h>

int main(void){

    char str[] = "Hello world";
    char *str2;

    fputs(str, stdout);
    fputs("\n", stdout);

    fgets(str, sizeof(str), stdin);
    fputs(str, stdout);

   // strcpy(str2, str);

  //  fputs(str2, stdout);
    
    gets(str);
    puts(str);


    return 0;
}
