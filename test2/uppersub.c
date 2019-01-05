#include <stdio.h>


int main(void){

    int n, k;

    scanf("%d", &n);
    scanf("%d", &k);

    if(n%k == 0) printf("%d\n", n/k);
    else printf("%d\n", n/k+1);


    return 0;
}
