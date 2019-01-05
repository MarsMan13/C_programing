#include <stdio.h>
#include <stdlib.h>
void *smaller(void *ptr1, void *ptr2, char option);

int main(void){

    char option;
    int a, b;
    float fa, fb;

    printf("Enter the type of numbers: ");
    scanf("%c", &option);

    if(option == 'i'){
        printf("Enter the 1st number: ");
        scanf("%d", &a);
        printf("Enter the 2st number: ");
        scanf("%d", &b);

        printf("Smaller value is %d\n", *(int *)smaller(&a, &b, option));
    }
    else if(option == 'f'){
        printf("Enter the 1st number: ");
        scanf("%f", &fa);
        printf("Enter the 2st number: ");
        scanf("%f", &fb);

   
        printf("Smaller value is %.2f\n", *(float *)smaller(&fa, &fb, option));
    }
   
    return 0;
}

void *smaller(void *ptr1, void *ptr2, char option){
    
    if(option == 'i'){
        if(*(int *)ptr1 <= *(int *)ptr2) return ptr1;
        else return ptr2;
    }
    else if(option == 'f'){
        if(*(float *)ptr1 <= *(float *)ptr2) return ptr1;
        else return ptr2;
    }

}
