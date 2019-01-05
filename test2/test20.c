#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    int n;
    int y;

}test;

test def(test e);


int main(void){
    
    test p[3]={
        {1,2},
        {3,4},
        {5,6}
    };

    p[1] = def(p[1]);

    printf("%d %d\n", p[1].n, p[1].y);

    return 0;
}

test def(test e){
    
    e.y = 0;

    return e;
}
