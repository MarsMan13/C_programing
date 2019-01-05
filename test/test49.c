#include <stdio.h>
void def(int ary[], int **, int **);


int main(void){

    int *maxp;
    int *minp;
    int ary[5];
    int n = 0;

    while(n<5){
        scanf("%d", &ary[n]);
        n++;
    }
    

    def(ary, &maxp, &minp);

    printf("%d %d\n", *maxp, *minp);

    return 0;
}


void def(int ary[], int **maxp, int **minp){
    
    int n = 0;
    int max = ary[0];

    for(n = 0; n< 5; n++){
        if(max <=ary[n]){
            *maxp  = &ary[n];
        }
    }

    max = ary[0];
    for(n = 0; n< 5; n++){
        if(max >=ary[n]){
            *minp = &ary[n];
        }
    }
}
