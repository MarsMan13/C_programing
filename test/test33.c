#include <stdio.h>
void swap(char *);

int main(void){

    char ary[100];
    int n = 0;
    scanf("%s", ary);

    swap(&ary[0]);

    
    while(ary[n]!=0){
        printf("%c", ary[n]);
        n++;

    }
    printf("\n");


    return 0;
}

void swap(char *ary){
    
    char temp;
    int count;
    int n = 0;

    while(ary[n]!= 0)
        n++;
    count = n;
   
    printf("%d\n", count);

    n = 0;

    while(n+1 <= (count/2)){
        temp = ary[n];
        ary[n] = ary[count-n-1];
        ary[count-n-1] = temp;
        n++;
    }
}
