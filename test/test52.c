#include <stdio.h>
void def(int (*ary)[4], int, int);

int main(void){

    int ary[4][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    def(ary);

    return 0;
}


void def(int (*ary)[4], int x, int y){

    int ary2[4][4]= [0];
    int n=0, m=0;

    for(n = 0;)
    

}



