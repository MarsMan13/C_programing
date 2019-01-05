#include <stdio.h>
void *def(void *pa, void *pb, int option);


int main(void){

    int option;
    int a,b;
    float fa, fb;
    double da, db;
    void *pa, *pb, *ans;

    scanf("%d", &option);

    switch(option){
        case 0:
            scanf("%d %d", &a, &b);
            pa = &a;
            pb = &b;
            printf("%d\n", *(int *)def(pa, pb, option));
            break;
        case 1:
            scanf("%f %f", &fa, &fb);
            pa = &fa;
            pb = &fb;
            printf("%f\n", *(float *)def(pa, pb, option));
            break;
        case 2:
            scanf("%lf %lf", &da, &db);
            pa = &da;
            pb = &db;
            printf("%lf\n", *(double *)def(pa, pb, option));
            break;
    }


    return 0;
}


void *def(void *pa, void *pb, int option){
    
    switch(option){
        case 0:
            return (*(int *)pa < (*(int *)pb)) ? pa : pb;
        case 1:
            return (*(float *)pa < (*(float *)pb)) ? pa : pb;
        case 2:
            return (*(double *)pa < *(double *)pb) ? pa : pb;
    }

}
