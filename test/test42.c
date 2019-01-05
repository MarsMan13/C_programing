#include <stdio.h>


int main(void){

    int ary[10] = {0};
    int n = 0;
    int even= 0, odd =0;
    int temp;

    while(1){

        scanf("%d", &temp);
        if(temp%2 == 0){
            ary[9-even] = temp;
            even++;
        }
        else if(temp%2 == 1){
            ary[odd] = temp;
            odd++;
        }
        if(even + odd == 10)
            break;
    }

    for(n = 0 ;n<10; n++)
        printf("%d ", ary[n]);
    
    printf("\n");

    return 0;
}
