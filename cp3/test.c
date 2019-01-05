#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){

    FILE *fp = fopen("data.txt", "r");
    char temp[31];
    int num;
    int _32 = 0, _44 = 0;

    fgets(temp, 30, fp);
    while(fgets(temp, 30, fp) != NULL){
        strtok(temp, " ");
        num = atoi(strtok(NULL, " "));
        if(num <32){
            _32++;
            printf("%d\n", num);
        }
        else if(num > 43){
            _44++;
            printf("%d\n", num);
        }
        
    }
    printf("~32: %d, 43~: %d\n", _32, _44);
}
