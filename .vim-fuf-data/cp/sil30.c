#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *my_strncpy(char *a, char *b, int n);
void initialization(char *a, int n);


int main(void){

    char *str1;
    char str[20];
    int i;

    fgets(str, 20, stdin);
    printf("%s\n\n", str);
    printf("%d\n", strlen(str));
    str1 = (char *)malloc(strlen(str) * sizeof(char));
    for(i = 0; i<strlen(str1)+1; i++){
        
        initialization(str, strlen(str));
        my_strncpy(str, str1, i);
        printf("%s\n", str1);
    }


    return 0;
}


char *my_strncpy(char *a, char *b, int n){
    strncpy(b, a, n);

}
void initialization(char *a, int n){
    
    int i;
    for(i = 0; i<n; i++)
        a[i] = '*';

}
