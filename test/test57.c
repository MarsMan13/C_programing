#include <stdio.h>

int main(void){

    char ary[100];
    FILE *inp;

    inp = fopen("c.txt", "w");
    if(inp==NULL){
        printf("input file open error!\n");
        return 1;
    }

    while(1){
        scanf("%s", ary);
        fprintf(inp, "%s", ary);
    }
    fclose(inp);

    return 0;
}
