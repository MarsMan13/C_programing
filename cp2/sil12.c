#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int strCmpPk(char *s1, char *s2);
void strPk(char *s1, char *s2);

int main(void){
    
    char str1[101];
    char str2[101];
    int temp;

    printf("first string : ");
    scanf("%s", str1);
    printf("second string : ");
    scanf("%s", str2);
    
    strPk(str1, str2);
    

    temp = strCmpPk(str1, str2);

    if(temp == 0){
        printf("string1 == string2\n");
    }
    else if(temp < 0){
       printf("string < string2\n");
    }
    else if(temp > 0){
       printf("string > string2\n");

    }

    return 0;
}

int strCmpPk(char *s1, char *s2){
    return strcmp(s1, s2);
}

void strPk(char *s1, char *s2){
    int i = 0, j = 0;
    
    char str[101] = {0};
    char str1[101] = {0};

    while(s1[i]!='\0'){
        if((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i]>='A' && s1[i]<='Z')){
            str[j] = s1[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';

    strcpy(s1, str);

    i = 0, j = 0;
    while(s2[i]!='\0'){
        if((s2[i] >= 'a' && s2[i] <= 'z') || (s2[i]>='A' && s2[i]<='Z')){
            str1[j] = s2[i];
            j++;
        }
        i++;
    }
    str1[j] = '\0';

    strcpy(s2, str1);
}
