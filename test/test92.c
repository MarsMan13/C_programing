#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    
    char str[] = "Necessity is the mother of Invention.";
    char *ptr = str;

    fputs(str, stdout);
    fputs("\n",stdout);

    fputs(&str[10], stdout);
    fputs("\n",stdout);

    return 0;
}
