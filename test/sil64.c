#include <stdio.h>

int main(void){
    
    int n = 100;
    int *pn = &n;
    int **ppn = &pn;
    int ***pppn = &ppn;

    printf("***pppn : %d\n", ***pppn);
    printf("**pppn : %p\n", **pppn);
    printf("*pppn : %p\n", *pppn);
    printf("pppn : %p\n", pppn);
    printf("&pppn : %p\n", &pppn);
    
    return 0;

}
