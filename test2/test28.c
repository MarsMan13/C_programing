#include <stdio.h>



int main(void){

    char str[11];

    scanf("%10[0123456789$]", str);

    printf("%s\n", str);


    return 0;
}
