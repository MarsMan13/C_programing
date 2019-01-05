#include <stdio.h>
#include <stdlib.h>


int main(void){

    long long int num;

    scanf("%16lld", &num);
    if((num / 1000 )<1000)
        printf("%lldK\n", num/1000);
    else if(num / 1000000 < 1000)
        printf("%lldM\n", num/1000000);
    else if(num / 1000000000 < 1000)
        printf("%lldG\n", num/1000000000);
    else if(num / 1000000000000 < 1000)
        printf("%lldP\n", num/1000000000000);

    return 0;
}
