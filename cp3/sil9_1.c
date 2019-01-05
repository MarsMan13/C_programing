#include <stdio.h>
#include <string.h>

int string_length(char *st);

int main(void){

    char s[] = "C is a high-level language";
    char *t = "C프로그래밍";
    
    printf("s: %d\n", string_length(s));
    printf("sizeof(s): %d\n", (int)sizeof(s));

    printf("t: %d\n", string_length(t));
    printf("sizeof(t): %d\n", (int)sizeof(t));

    return 0;
}

int string_length(char *st){
    
    int count = 0;

    while(*(st+count) != 0){
        count++;
    }
    return count;
}
