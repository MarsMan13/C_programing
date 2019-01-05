#include <stdio.h>
#include <stdlib.h>
char *def(void);


int main(void){

    char *name1;
    char *name2;

    name1 = def();
    printf("name1 : %s\n", name1);
    name2 = def();
    printf("name2 : %s\n\n", name2);

    printf("name1 : %s\n", name1);
    printf("name2 : %s\n", name2);

    free(name1);
    free(name2);

    return 0;
}


char *def(void){

    char *ptr = (char *)malloc(30*sizeof(char));

    printf("What is your name?\n");

    gets(ptr);

    return ptr;
}
