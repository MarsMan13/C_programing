#include <stdio.h>
void upper_to_lower(char str[]);
char *lower_to_upper(char str[]);

int main(void){

    char ary[]= "123AbCdEfGh";
    char p[] = "There's no Free Lunch";
    
    upper_to_lower(ary);
    printf("%s\n", ary);
    printf("%s\n", lower_to_upper(ary));

    upper_to_lower(p);
    printf("%s\n", p);
    printf("%s\n", lower_to_upper(p));



    return 0;
}

void upper_to_lower(char str[]){
    
    int i =0;

    while(1){
        if(str[i] == '\0')
            return;
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] - ((int)'A'- (int)'a'); 
        }
        i++;
    }
    
    return;

}

char* lower_to_upper(char str[]){
    
    int i =0;

    while(1){
        if(str[i] == '\0')
            return str;

        if(str[i] <= 'z' && str[i] >= 'a')
            str[i] += ('A'-'a');
            i++;
    }
    return str;
}
