#include <stdio.h>


int main(void){

    int n;
    int i = 1;
    double p =1;

    scanf("%d", &n);
    while(i<=n){
        p *= i;
        i++;
    }
    printf("anw : %lf\n", p);

    return 0;
}
