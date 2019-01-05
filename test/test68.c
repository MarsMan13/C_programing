#include <stdio.h>


int main(void){

    int n = 10;
    int *ptr = &n;
    int **dptr = &ptr;
    int ***ddptr = &dptr;

    printf("&(*ddptr) == &dptr\n");
    if(&(*ddptr) == &dptr) printf("True\n");

    printf("&(**ddptr) == &ptr\n");
    if(&(**ddptr) == &ptr) printf("True\n");

    return 0;
}
