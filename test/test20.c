#include <stdio.h>

int main(void)
{

    int n = 100;
    int *pn = &n;
    
    printf("---------------------------\n\n");
    printf("n = 100, *pn = &n\n\n");

    printf("&pn = %d\n", &pn);
    printf("*pn = %d\n", *pn);
    printf("pn = %d\n\n", pn);
    printf("---------------------------\n\n");

    return 0;
}
