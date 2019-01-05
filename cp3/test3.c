#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct stamp{
    struct{
        int year;
        int month;
        int day;
    }date;

    struct time{
        int hour;
        int min;
        int sec;
    }time;

}STAMP;

int main(void){

    STAMP start = {{2009, 12,31}, {11, 11, 11}};

    printf("%d %d %d\n", start.date.year, start.date.month, start.date.day);
    printf("%d\n", start.time.hour);

    return 0;
}
