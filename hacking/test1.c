#include <stdio.h>

int debug(int a, int b, int c){

    return a+b+c;
}

int main(void){
    
    int ret;

    ret = debug(1, 2, 3);

    return 0;
}
