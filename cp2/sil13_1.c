#include <stdio.h>

enum Date{
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};

struct Calendar{
    int year, month, day;
    enum Date date;
    char *dateString;
};

enum Date getDate(int y, int m, int d);
char *getDay(enum Date currDate);

//@@@@@main@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int main(void){

    struct Calendar x;

    scanf("%d", &x.year);
    scanf("%d", &x.month);
    scanf("%d", &x.day);

    x.date = getDate(x.year, x.month, x.day);
    
    x.dateString = getDay(x.date);

    printf("%s\n", x.dateString);

    return 0;
}

enum Date getDate(int y, int m, int d){

    return (y+ y/4 - y/100+ y/400+(13*m + 8)/5 + d)%7;
}

char *getDay(enum Date currDate){

    if(currDate == Sunday)
        return "Sunday";
    else if(currDate == Monday)
        return "Monday";
    else if(currDate == Tuesday)
        return "Tuesday";
    else if(currDate == Wednesday)
        return "Wednesday";
    else if(currDate == Thursday)
        return "Thursday";
    else if(currDate == Friday)
        return "Friday";
    else if(currDate == Saturday)
        return "Saturday";

}

