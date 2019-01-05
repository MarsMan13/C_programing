#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void def(char ary[], int n);


int main(void){

    int i;
    srand(time(NULL));

    char ary[50];
    
    scanf("%s", ary);

    for(int i = 0; i<5; i++){
        
        int number= rand()%25 +1;
        def(ary, number);
        printf("%d %s\n", number, ary);    
    
    }



    return 0;
}

void def(char ary[], int n){
    
    int i = 0;

    while(1){
        if(ary[i] == 0) break;
        else{
            if(ary[i] >= 'a' && ary[i] <= 'z')
                ary[i] -= 'a'-'A';
            i++;
        }
    }
    i = 0;
    while(1){
        if(ary[i] == 0) return;
        else{
            ary[i] += n;
            if(ary[i] > 'Z')
                ary[i] = (ary[i] - 'Z') + 'A';
            i++;
        }
    }

}
