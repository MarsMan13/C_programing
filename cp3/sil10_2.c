#include <stdio.h>
#include <string.h>

void def(char ary[]);

int main(void){

    char ary[17];

    scanf("%16s", ary);

    printf("%s\n", ary);

    def(ary);

    return 0;
}

void def(char ary[]){
    
    int i = 0;
    long int num = 0;
    long int ten = 1;

    while(ary[i] != '\0'){
        ten*=10;
        i++;
    }
    ten/=10;

    i = 0;
    while(ary[i] != '\0'){
        if('0' > ary[i] || ary[i] > '9'){
            printf("%s\n", ary);
            return;
        }
        else{
            num += ((long int)ary[i] - '0')*ten;
            ten/= 10;
        }
        i++;
    }

    printf("num : %ld\n", num);
    printf("\n");

    if((ten = (num/1000000000000000)) != 0){
        printf("%ldP\n", ten);
        return;
    }
    else if((ten = (num/1000000000000)) != 0){
        printf("%ldT\n", ten);
        return;
    }
    else if((ten = (num/1000000000)) != 0){
        printf("%ldG\n", ten);
        return;
    }
    else if((ten = (num/1000000)) != 0){
        printf("%ldM\n", ten);
        return;
    }
    else if((ten = (num/1000)) != 0){
        printf("%ldK\n", ten);
        return;
    }
    else printf("%ld\n", num);

    return;

}
