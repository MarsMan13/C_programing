#include <stdio.h>
#include <stdlib.h>
void move_order(int *arr);


int main(void){

    int ary[10];
    int i;
    
    for(i = 0; i<10; i++)
        scanf("%d", ary+i);

    printf("Before : ");
    for(i = 0; i<10; i++)
        printf("%d ", *(ary+i));
    
    move_order(ary);
    
    printf("\nAfter : ");
    for(i = 0; i<10; i++)
        printf("%d ", *(ary+i));
    printf("\n");


    return 0;
}

void move_order(int *arr){
    
    int row = *arr;
    int i;
    for(i = 0; i<9; i++)
        *(arr + i) = *(arr + i +1);
    *(arr  + 9) =row;
}
