#include <stdio.h>
#include <string.h>
void split_string(char *str, char *string_1, char *string_2);

int main(void){

    char string[50] = {0};
    char string_1[50] = {0};
    char string_2[50] = {0};

    printf("input str : ");
    scanf("%[^\n]",string);

    split_string(string, string_1, string_2);

    printf("[%s] --> [%s] [%s]\n", string, string_1, string_2);

    return 0;
}

void split_string(char *str, char *string_1, char *string_2){

    int n = (strlen(str))/2;

    strncpy(string_1, str, n);
    strncpy(string_2, str+n, n);

}
