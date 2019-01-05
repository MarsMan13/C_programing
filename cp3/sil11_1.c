#include <stdio.h>
#include <string.h>

void split_string(char *str, char *string_1, char *string_2);

int main(void){

    char str[51];
    char str1[51] = NULL;
    char str2[51] = NULL;

    printf("Input str : ");
    scanf("%s", str);

    split_string(str, str1, str2);

    return 0;
}

void split_string(char *str, char *string_1, char *string_2){
    
    int count = 0;
    int i;

    while(str[count] != '\0'){
        count++;
    }
    
    if(count%2 == 0){
        for(i = 0; i<count; i++){
            if(i<(count%2)){
                string_1
            }
        }
    }
    
}
