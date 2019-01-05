#include <stdio.h>


int main(void){

    int n = 100;
    int nn = 200;

    int *pn = &n;
    int **ppn = &pn;

    
    printf("%d\n", **ppn);
    pn = &nn;
    printf("%d\n", **ppn);

    return 0;
}
