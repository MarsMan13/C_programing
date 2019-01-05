#include <stdio.h>
void swap(int *, int*);


int main(void){

    int a, b;

    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}

void swap(int *a, int *b){

    int temp = *b;
    *b = *a;
    *a = temp;
}
