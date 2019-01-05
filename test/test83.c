#include <stdio.h>
#include <stdlib.h>
void def(char *p);

int main(void){
    
    char *p = "Hello";
    int i =0;

    def(p);
    for(i = 0; ;i++){
        if(p[i] == 0) break;
        else printf("%c", p[i]);

    }
    printf("\n");


    return 0;
}

void def(char *p){

    int i = 0;

    while(1){
        printf("check0\n");
        if(p[i] == 0) return;
        else{
            printf("check1\n");
            p[i] = 'H';
            printf("check2\n");
            i++;
        }

    }
}
