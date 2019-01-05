#include <stdio.h>
void def(int ary[][3]);

int main(void){
    
    int i, j;

    int ary1[3][3]={
        {1},
        {4, 5},
        {7, 8, 9}
    };

    int ary2[3][3] = {
        1,2,3,4,5
    };

    int ary3[][3] = {
        1,2,3,4,5,6,7,8,9
    };

    def(ary1);
    printf("\n\n");
    def(ary2);
    printf("\n\n");
    def(ary3);

    return 0;
}



void def(int ary[3][3]){
    
    int i, j;

    for(i = 0; i<4; i++){
        for(j = 0 ; j<3; j++){
            printf("%d ", ary[i][j]);
        }
        printf("\n");
    }

}
