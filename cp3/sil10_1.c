#include <stdio.h>
#include <string.h>

int def(char str[]);

int main(void){

    char str[101];

    fgets(str, 100, stdin);

    printf("%d\n", def(str));

    return 0;
}

int def(char str[]){

    int i = 0;
    int switching = 0;
    int ret = 0;

    while(str[i] != '\n'){
        if(str[i] == ' '){
            switching = 0;
        }
        else{
            if(switching == 0){
                switching = 1;
                ret++;
            }
            else;
        }
        i++;
        
    }

    return ret;
}
