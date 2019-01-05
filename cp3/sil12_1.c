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


enum Date getDate(int y, int m, int d){
        
    return ((y+y/4 - y/100 + y/400 + (13*m + 8)/5+d)%7);
}

char *getDay(enum Date currDate){
    
    if(currDate == Sunday) return "Sunday";
    else if(currDate == Monday) return "Monday";
    else if(currDate == 2) return "Tuesday";
    else if(currDate == 3) return "Wednesday";
    else if(currDate == 4) return "Thursday";
    else if(currDate == 5) return "Friday";
    else if(currDate == 6) return "Saturday";

}

int main(void){

    struct Calendar dayy;

    scanf("%d", &(dayy.year));
    scanf("%d", &(dayy.month));
    scanf("%d", &(dayy.day));

    dayy.date = getDate(dayy.year, dayy.month, dayy.day);

    dayy.dateString = getDay(dayy.date);

    printf("%s\n", dayy.dateString);

    return 0;
}


