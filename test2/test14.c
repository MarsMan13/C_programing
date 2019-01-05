#include <stdio.h>

typedef enum months{
    jan = 1,
    feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
}Mon;


int main(void){

    Mon mon;

    for(mon = jan; mon<= dec; mon++)
        printf("%d ", mon);
    printf("\n");



    return 0;
}
