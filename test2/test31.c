#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    
    char *pDays[7];
    char **pLast;
    char **pWalker;
    char temp[20];
    int i;

    

    printf("The days of the week\n");
    pLast = pDays + 6;

    for(pWalker = pDays; pWalker <= pLast; pWalker++){
        printf("%s\n", *pWalker);
    }

    return 0;

}
