#include <stdio.h>


int main(void){
    
    char month[1000];
    
    scanf("%[0123456789.,-$]", month);

    printf("%s\n", month);

    getchar();

    scanf("%[^\n^\t]", month);

    printf("%s\n", month);
    
    return 0;
}
