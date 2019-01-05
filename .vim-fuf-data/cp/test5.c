#include <stdio.h>

int main(void){
    
    int a = 3;
    void *p;
    p = &a;

    printf("%d\n", *(int*)p);

    return 0;
