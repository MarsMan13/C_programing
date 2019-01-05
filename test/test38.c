#include  <stdio.h>

int main(void){

    int ary[] = {1,2,3,4,5};
    int *p = ary;
    int n=0;

    for(n = 0; n<5; n++){
        *(p+n)+= 2;
    }
    for(n = 0; n<5; n++){
        printf("%d ", *(p+n));
    }
    printf("\n");
    

    return 0;
}
