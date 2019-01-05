#include <stdio.h>
void* f(void *, void *, int);


int main(void){

    int option;
    int a, b;
    float fa, fb;
    double da, db;
    void *pa, *pb, *ans;


    scanf("%d", &option);
    switch(option){
        case 0:
            scanf("%d %d", &a, &b);
            pa= &a;
            pb = &b;              
            ans = f(pa, pb, option);
            printf("%d\n", *(int*)ans);
            break;
        case 1:
            scanf("%f %f", &fa, &fb);
            pa = &fa;
            pb = &fb;
            ans = f(pa, pb, option);
            printf("%f\n", *(float*)ans);
            break;
        case 2:
            scanf("%lf %lf", &da, &db);
            pa = &da;
            pb = &db;
            ans = f(pa, pb, option);
            printf("%lf\n", *(double*)ans);
            break;
    }


    return 0;
}


void* f(void *pa, void *pb, int option){
    

    if(option == 0){
        return *(int*)pa >= *(int*)pb ? pb : pa;
    }
    else if(option == 1){
        return *(float*)pa >= *(float*)pb ? pb : pa;
    }
    else{
        return *(double*)pa >= *(double*)pb ? pb : pa;
    }



}

