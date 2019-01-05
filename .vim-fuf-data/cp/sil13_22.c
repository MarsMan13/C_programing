#include <stdio.h>
struct CoinBox{
    int n500;
    int n100;
    int n50;
    int n10;
};


int main(void){

    int n;
    struct CoinBox coin;

    scanf("%d", &n);

    //

    coin.n500 = n/500;
    n %= 500;

    coin.n100 = n/100;
    n %= 100;

    coin.n50 = n/50;
    n %= 50;

    coin.n10 = n/10;
    n %= 10;

    printf("%d\n%d\n%d\n%d\n", coin.n500, coin.n100, coin.n50, coin.n10);


    return 0;
}
