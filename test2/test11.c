#include <stdio.h>

typedef union{

    int n;
    char c;

}Un;


int main(void){

    Un x = {23, 32};


    printf("%d\n", sizeof(x));


    printf("%d %d\n", x.n, x.c);
    
    x.n=32;
    printf("%d %d\n", x.n, x.c);

    return 0;
}
