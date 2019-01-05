#include <stdio.h>
void *def(void *pa, void *pb, int option)

int main(void){

    int option;
    int a, b;
    float fa, fb;
    double da, db;
    void *pa, *pb, *ans;

    scanf("%d", &option);
    
    if(option == 0){
        scanf("%d %d", &a, &b);

    }
    else if(option == 1){
        scanf("%f %f", &fa, &fb);

    }
    else if(option == 2){
        scanf("%lf %lf", &da, &db);
    
    }
    


    return 0;
}
