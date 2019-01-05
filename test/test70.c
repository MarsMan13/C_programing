#include <stdio.h>
void swap(int **pp1, int **pp2);

int main(void){
    
    int n1=1, n2=2;
    int *p1 = &n1, *p2 = &n2;

    printf("%d %d\n", *p1, *p2);

    swap(&p1, &p2);

    printf("%d %d\n", *p1, *p2);

    return 0;
}

void swap(int **pp1, int **pp2){

    int *temp = *pp1;
    *pp1 = *pp2;
    *pp2 = temp;
}
