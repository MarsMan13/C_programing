#include <stdio.h>
int is_prime(int ***a);

int main(void){

    int a;
    int *pa;
    int **ppa;


    scanf("%d", &a);
    
    pa = &a;
    ppa = &pa;
    

    printf("%d\n", is_prime(&ppa));
    
    return 0;
}

int is_prime(int ***a){

    if(***a<=1)
        return 0;

    int count = 0;
    int n = 0;

    while(***a != n){
        n++;    
        if((***a)%n==0){
            printf("%d\n", n);
            count++;
        }
    }

    if(count == 2)
        return 1;
    else
        return 0;

}
