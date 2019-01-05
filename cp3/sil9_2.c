#include <stdio.h>
#include <string.h>

void upper_to_lower(char str[]);
void lower_to_upper(char str[]);

int main(void){

    char str1[] = "123AbCdEfGh";
    char str2[] = "There's no Free Lunch";

    upper_to_lower(str1);
    printf("%s\n", str1);
    lower_to_upper(str1);
    printf("%s\n", str1);


    upper_to_lower(str2);
    printf("%s\n", str2);
    lower_to_upper(str2);
    printf("%s\n", str2);

    return 0;
}

void upper_to_lower(char str[]){
    int i = 0;

    while(str[i] != '\0'){
        if(('A' <= str[i]) && (str[i] <= 'Z')){
            str[i] -= ('A'-'a');
        }
        i++;
    }

}

void lower_to_upper(char str[]){
    int i = 0;
    
    while(str[i] != '\0'){
        if('a' <= str[i] && str[i] <= 'z'){
            str[i] -= ('a'-'A');
        }
        i++;
    }

}
