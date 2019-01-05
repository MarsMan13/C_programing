#include <stdio.h>

int main(void){
    
    char ary[100];
    char top = 0;
    int n = 0;

    scanf("%s", ary);
    
    top= ary[0];
    while(ary[n] != 0){
        if(top <= ary[n]){
            top = ary[n];
        }
        n++;
    }
    
    printf("%c\n", top);

    return 0;
}
