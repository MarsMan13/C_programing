#include <stdio.h>

enum date{
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};


int main(void){

    enum date  day= 0;

    printf("%d", day == Sunday);


    return 0;
}
