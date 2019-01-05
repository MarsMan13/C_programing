#include <stdio.h>

int main(void){
    
    char ary[100] = {0};
    int len = 0;
    int count = 0;

    scanf("%s", ary);

    while(ary[len] != 0)
        len++;

    while(count != len){
        if(ary[count] != ary[len - count -1]){
            printf("This is not a Palindrome.\n");
            return 0;
        }
        count++;
    }
    printf("This is a Palindrome\n");

    return 0;
}
