#include <stdio.h>
int *def(int, int);


int main(void){

    int a, b;
    int *p;

    scanf("%d %d", &a, &b);

    printf("&a : %p, &b : %p\n", &a, &b);

    p = def(a, b);
    

    printf("%p\n%d\n", p, *p);

    return 0;
}


int* def(int a, int b){

    printf("%p\n", &a);
    return (a > b) ? &a : &b;

}
