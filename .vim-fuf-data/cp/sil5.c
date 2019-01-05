#include <stdio.h>
void sort4(int *, int *, int *, int *);


int main(void){

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    sort4(&a, &b, &c, &d);

    printf("%d %d %d %d\n", a, b, c, d);

    return 0;
}

void sort4(int *a, int *b, int *c, int *d){

    int temp;

    if(*a >= *b){
        temp = *b;
        *b = *a;
        *a = temp;
    }
    if(*b >= *c){
        temp = *c;
        *c = *b;
        *b = temp;
    }
    if(*c >= *d){
        temp = *d;
        *d = *c;
        *c = temp;
    }


    if(*a >= *b){
        temp = *b;
        *b = *a;
        *a = temp;
    }
    if(*b >= *c){
        temp = *c;
        *c = *b;
        *b = temp;
    }


    if(*a >= *b){
        temp = *b;
        *b = *a;
        *a = temp;
    }

}
