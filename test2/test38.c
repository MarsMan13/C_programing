#include <stdio.h>
#include <stdlib.h>

enum Gender{
    Male = 0,
    Female
};

int main(void){
    
    enum Gender x;

    x = 0;

    printf("%d\n", x);

    return 0;
}
