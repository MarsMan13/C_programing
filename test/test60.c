#include <stdio.h>
void def(int *a, int **mx, int **mn);


int main(void){

    int *max, *min;
    int ary[5];
    int n;

    for(n = 0; n<5; n++)
        scanf("%d", &ary[n]);
    
    for(n = 0; n<5; n++)
        printf("%d : %p\n", n, &ary[n]);

    def(ary, &max, &min);
    
    printf("max : %d,  &max : %p\n", *max, max);
    printf("min : %d,  &min : %p\n", *min, min);

    return 0;
}


void def(int *a, int **mx, int **mn){
    
    int n;
    
    *mx = a;
    *mn = a;

    for(n = 0; n<5; n++){
        if(*(a+n)> **mx)
            *mx = a+n;    
    }
    
    for(n = 0; n<5; n++){
        if(*(a+n)< **mn)
            *mn = a+n;
    }
    
    return;
}
