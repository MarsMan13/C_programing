#include <stdio.h>
void def(int *a);

int main(void){
    
    int ary[3][3] = {
        1,2,3,
        4,5,6,
        7,8,9,
    };
    int i;

    for(i = 0; i<3; i++)
        def(ary[i]);

    return 0;
}


void def(int *a){
    
    int i;

    for(i = 0; i<3; i++)
        printf("%d ", a[i]);
    printf("\n");

    return;
}
