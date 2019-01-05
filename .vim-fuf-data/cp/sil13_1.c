#include <stdio.h>

enum Date{
    sunday = 0, monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5,
    saturday = 6
};

enum Date getDate(int y, int m, int d){
    
    return (y + y/4 - y/100 + y/400 + (13*m + 8)/5 + d)%7;
};

struct Calendar{
    int year, month, day;
    enum Date date;
    char *dateString;
};

char *getDay(enum Date currDate);

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

char *getDay(enum Date currDate){

    if(currDate == 0)
        return "Sunday";
    else if(currDate == 1)
        return "Monday";
    else if(currDate == 2)
        return "Tuesday";
    else if(currDate == 3)
        return "Wednesday";
    else if(currDate == 4)
        return "Thursday";
    else if(currDate == 5)
        return "Friday";
    else if(currDate == 6)
        return "Saturday";


}
