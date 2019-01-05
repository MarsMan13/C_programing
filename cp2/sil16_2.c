#include <stdio.h>
#include <stdlib.h>

typedef struct{
    
    float price;
    float number;

}Buying;

Buying getAverage(Buying *pBuying, int n);

int main(void){

    Buying *p;
    Buying pp;
    int n;
    int i;
    float sum = 0;
    float count = 0;

    scanf("%d", &n);

    p = (Buying*)calloc(n, sizeof(Buying));

    for(i = 0; i< n; i++){
        scanf("%f %f", &(p[i].price), &(p[i].number));
    }
    
    pp = getAverage(p, n);

    printf("%.2f %.2f\n", ((pp).price)/n, ((pp).number)/n);

    return 0;
}

Buying getAverage(Buying *pBuying, int n){
    int i;
    Buying p;
    p.price =0, p.number =0;

    for(i = 0; i<n; i++){
        p.price += pBuying[i].price;
        p.number += pBuying[i].number;
    }
    
    return p;
}
