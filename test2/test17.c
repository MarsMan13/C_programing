#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(void){

    FILE *p = fopen("test.txt", "r");
    
    char temp[100];

    while(fgets(temp, 99, p) != NULL){
        printf("%s", temp);

    }
    printf("\n");

    fclose(p);

    return 0;
}
