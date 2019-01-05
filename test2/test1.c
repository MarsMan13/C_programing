#include <stdio.h>

enum months{
    jan = 1,
    feb,
    mar,
    apr,
    may,
    jun,
    jul, aug, sep, oct, nov, dec
};

int main(void){
    
    enum months st1;

    st1 = may;

    printf("%d\n", st1);

    return 0;
}
