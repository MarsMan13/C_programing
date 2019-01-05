#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void function(double *pa, double *pb, double *pc, double *pd);


int main(void){
    
    double a, b, c, d;
    
    printf("Input a, b, c, d:");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    function(&a, &b, &c, &d);   

    printf("%lf\n", a);

    return 0;
}

void function(double *pa, double *pb, double *pc, double *pd){
    
    *pa = sqrt(pow(*pa - *pc, 2)+ pow(*pb - *pd, 2));

}
