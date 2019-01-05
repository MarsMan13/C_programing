#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float price;
    float number;
}Buying;

Buying getaverage(Buying *pBuying, int n);


int main(void){
    
    int n;
    Buying avg;
    Buying *list;
    int i;

    scanf("%d", &n);
    list = (Buying *)malloc(sizeof(Buying) * n);
    for(i = 0; i<n; i++){
        scanf("%f %f", &(list[i].price), &(list[i].number));
    }
    avg = getaverage(list, n);

    printf("%.2f %.2f\n", avg.price, avg.number);

    return 0;
}

Buying getaverage(Buying *pBuying, int n){
    int i;
    Buying avg;
    avg.price = 0;
    avg.number = 0;

    for(i = 0; i<n; i++){
        avg.price += pBuying[i].price;
    }
    for(i = 0; i<n; i++){
        avg.number += pBuying[i].number;
    }
    avg.price /= n;
    avg.number /= n;

    return avg;
}
