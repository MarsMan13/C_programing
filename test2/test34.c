#include <stdio.h>
#include <stdlib.h>

enum channel{
    sbs = 1,
    kbs1,
    kbs2,
    mbc,
    ebs,
};


int main(void){

    int input = 0;

    scanf("%d", &input);
    
    switch(input){
        case 1:
            printf("sbs\n");
            break;
        case 2:
            printf("kbs1\n");
            break;
        case 3:
            printf("kbs2\n");
            break;
        case 4:
            printf("mbc\n");
            break;
        case 5:
            printf("ebs\n");
            break;
    }

    return 0;
}
