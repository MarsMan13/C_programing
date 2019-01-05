#include <stdio.h>
void def1(int ary[]);
void def2(int ary[]);

int main(void){
    
    int ary[10];
    int n;

    for(n = 0; n<10; n++){
        scanf("%d", &ary[n]);
    }

    def1(ary);
    def2(ary);
    
    
    return 0;
}

void def1(int ary[]){
    
    int n = 0;

    for(n = 0 ;n < 10 ; n++){
        if(ary[n]%2 == 1)
            printf("%d ", ary[n]);

    }
    printf("\n");

}

void def2(int ary[]){
    
    int n = 0;

    for(n = 0 ; n< 10; n++){
        if(ary[n]%2 == 0)
            printf("%d ", ary[n]);
        
    }
    printf("\n");


}



