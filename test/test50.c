#include <stdio.h>


int main(void){
    
    int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = ary;
    int n;

    while(1){
        scanf("%d", &n);
        if((n>=1) && (n<=10)){
            printf("%d\n", p[n-1]);
        }
    }


    return 0;
}
