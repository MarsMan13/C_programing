#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void){

    char *pDays[7];
    char **pLast;
    char **pWalker;

    pDays[0] = "Sunday";
    pDays[1] = "Monday";
    pDays[2] = "Tuesday";
    pDays[3] = "Wednesday";
    pDays[4] = "Thursday";
    pDays[5] = "Friday";
    pDays[6] = "Saturday";

    printf("The days of the week\n");
    pLast = pDays + 6;

    for(pWalker = pDays; pWalker<=pLast; pWalker++)
        printf("%s\n", *pWalker);

    return 0;
}
