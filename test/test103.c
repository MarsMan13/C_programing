#include <stdio.h>
#include <string.h>


int main(void){

    char str[100];
    int i;

    printf("Enter anything below here----\n");

    scanf("%s", str);
    
    printf("%d %s\n", strlen(str), str);

    i = 0;
    while(str[i] != 0){
        printf("%d\n", str[i]);
        i++;
    }

    printf("|%lu|\n", stdin);



    while(getchar() != '\n');

    fgets(str, sizeof(str), stdin);


    printf("%d %s\n", strlen(str), str);


    i = 0;
    while(str[i] != 0){
    
        printf("%d\n", str[i]);
        i++;
    }


    return 0;
}
