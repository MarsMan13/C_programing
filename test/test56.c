#include <stdio.h>

int main(void){
    
    char ch;

    while(1){
        ch = fgetc(stdin);
        if(ch == EOF) break;
        fputc(ch, stdout);
    }


    return 0;
}
