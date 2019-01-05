#include <stdio.h>
int string_length(char *st);

int main(void){

    char s[] = "C is a high-level language";
    char *t = "C프로그래밍";


    printf(" 문자열 s의 길이 : %d\n", string_length(s));
    printf(" sizeof(s)       : %d\n", (int)sizeof(s));
    printf(" 문자열 t의 길이 : %d\n", string_length(t));
    printf(" sizeof(t)       : %d\n", (int)sizeof(t));


    return 0;
}


int string_length(char *st){
    
    int count =0;
    
    while(1){
        if(*(st+count) == '\0') return count;
        else{
            count++;
        }
    }
}
