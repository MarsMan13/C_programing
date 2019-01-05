#include <stdio.h>

struct CoinBox{
    int n500;
    int n100;
    int n50;
    int n10;
};

int main(void){

    int money = 0;
    struct CoinBox m;

    scanf("%d", &money);

    m.n500 = money/500;
    money%=500;

    m.n100 = money/100;
    money%=100;

    m.n50 = money/50;
    money%= 50;

    m.n10 = money/10;

    printf("%d\n", m.n500);
    printf("%d\n", m.n100);
    printf("%d\n", m.n50);
    printf("%d\n", m.n10);

    

    return 0;
}
