#include <stdio.h>

int main(void){
    
    int ary[10];

    scanf("%d", ary+1);

    printf("%d", *(ary+1));
    
    return 0;
}
