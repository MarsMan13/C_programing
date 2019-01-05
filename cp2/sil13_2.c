#include <stdio.h>

struct CoinBox{

    int n500;
    int n100;
    int n50;
    int n10;
};

int main(void){

    struct CoinBox a;
    int n;

    scanf("%d", &n);

    printf("%d\n", a.n500 = n/500);
    n %= 500;

    printf("%d\n", a.n100 = n/100);
    n %= 100;

    printf("%d\n", a.n50 = n/50);
    n %= 50;

    printf("%d\n", a.n10 = n/10);
    n %= 10;


    return 0;
}
