#include <stdio.h>
void sort4(int *a, int *b, int *c, int*d);
void swap(int *a, int *b);

int main(void){

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    sort4(&a, &b, &c, &d);

    printf("%d %d %d %d\n", a, b, c, d);

    return 0;
}


void sort4(int *a, int *b, int *c, int *d){
    
    if(*a > *b) swap(a, b);
    if(*b > *c) swap(b, c);
    if(*c > *d) swap(c, d);
    if(*a > *b) swap(a, b);
    if(*b > *c) swap(b, c);
    if(*a > *b) swap(a, b);
}

void swap(int *a, int *b){
    
    int temp = *b;
    *b = *a;
    *a = temp;
}
