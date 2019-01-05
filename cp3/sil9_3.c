#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void def(char str[], int number);

int main(void){

    int i;
    int number;
    char str[51];
    char temp[51];

    srand(time(NULL));

    scanf("%s", str);
    
    for(i= 0; i< 5; i++){
        strcpy(temp, str);
        number = (rand()%26+1);
        def(temp, number);
        printf("%d %s\n", number, temp);
    }

    return 0;
}

void def(char str[], int number){

    int i = 0;
    
    while(str[i] != '\0'){
        if('a' <= str[i] && str[i] <= 'z'){
            str[i] -= ('a'-'A');
        }
    
        str[i] += number;
        if(str[i]>'Z'){
            str[i] = 'A'+(str[i]-'Z')-1; 
        }

        i++;
    }

}
