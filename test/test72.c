#include <stdio.h>


int main(void){

    int ary[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("%d %d\n", ary[1][0], *ary[1]);


    return 0;
}
