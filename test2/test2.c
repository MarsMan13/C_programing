#include <stdio.h>

enum Date{
    sun = 0,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat,
};


int main(void){

    enum Date a = sun;

//    printf("%s\n", a);

    printf("%d\n", a == 0);

    return 0;
}
