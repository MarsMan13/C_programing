#include <stdio.h>
void def(int (*a)[3]);

int main(void){
    
    int ary[3][3] = {
        1,2,3,
        4,5,6,
        7,8,9,
    };

    def(ary);

    return 0;
}


void def(int (*a)[3]){
    
    int i, ii;

    for(i = 0; i< 3; i++){
        for(ii = 0; ii<3; ii++)
            printf("%d ", a[i][ii]);
        printf("\n");
    }


    return;
}
