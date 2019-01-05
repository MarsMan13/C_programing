#include <stdio.h>
void def(char ary[]);

int main(void){

    char ary[100] = {1,2,3,4};

    def(ary);


    return 0;
}


void def(char[]){

    printf("%d\n", sizeof(ary)/sizeof(char));

}
