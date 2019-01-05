#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct date{
    int year;
    int month;
    int day;
}DATE;

typedef struct patient{
    char name[26];
    int age;
    DATE birthday;
    DATE enterDate;
    DATE leaveDate;
}PATIENT;


int main(void){

    PATIENT *pat = (PATIENT *)malloc(100 * sizeof(PATIENT));
    FILE *fp;
    char str[100];
    int i;

    pat[0].birthday.year = 2001;

    printf("%d\n", pat[0].birthday.year);


    return 0;
}
