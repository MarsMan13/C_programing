#include <stdio.h>
void printing(int ary[]);
void printing2(int *a);

int main(void){
    
    int ary[6]= {1, 2, 3, 4, 5, 6};
    int *ptr1 = &ary[0];
    int *ptr2 = &ary[5];
    int temp;
    int i;
    
    printing(ary);

    for(i = 0; i<3; i++){
        temp = *(ptr1+i);
        *(ptr1+i) = *(ptr2-i);
        *(ptr2-i) = temp;

    }
    
    //printing(ary);
    
    printing(ary);

    return 0;
}

void printing(int ary[]){
    
    int i;

    for(i = 0; i<6; i++)
        printf("%d ", ary[i]);
    printf("\n");

}

void printing2(int *a){
    
    int i;

    for(i = 0; i<6; i++)
        printf("%d ", *(a+i));
    printf("\n");
}
