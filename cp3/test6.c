#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int numerator;
    int denominator;
}FRACTION;

void getFr(FRACTION *pFr);
void multFr(FRACTION *pFr1, FRACTION *pFr2,
        FRACTION *pRes2);

void printFr(FRACTION *pFr1, FRACTION* pFr2,
        FRACTION* pRes);


int main(void){

    FRACTION p1, p2, p3;

    getFr(&p1);
    getFr(&p2);

    multFr(&p1, &p2, &p3);

    printFr(&p1, &p2, &p3);

    return 0;
}

void getFr(FRACTION *pFr){
    printf("Enter a fraction in the form of x/y: ");
    scanf("%d/%d", &(pFr->numerator), &(pFr->denominator));

    return;
}

void multFr(FRACTION *pFr1, FRACTION *pFr2, FRACTION *pRes2){
    
    pRes2->numerator = ((pFr1->numerator) * (pFr2->numerator));
    pRes2->denominator = ((*pFr1).denominator * (*pFr2).denominator);
    int i =2;
    while(i <= (pRes2->numerator) && i <= (pRes2->denominator)){
        if((pRes2->numerator)%i == 0 && (pRes2->denominator)%i == 0){
            pRes2->numerator /= i;
            pRes2->denominator /= i;
            i = 2;
            continue;
        }
        i++;
    }
    return;
}

void printFr(FRACTION *pFr1, FRACTION* pFr2, FRACTION* pRes){
    printf("--- the answer ---\n");

    printf("%d/%d * %d/%d = %d/%d\n", pFr1->numerator, pFr1->denominator,pFr2->numerator, (*pFr2).denominator, (*pRes).numerator, (*pRes).denominator);

    return;
}
