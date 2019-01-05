#include <stdio.h>

int main(void){
    
    int ary[3] = {1,2,3};
    int *p = ary;

    printf("%d %d\n", ary[0], p[0]);

    return 0;
}
