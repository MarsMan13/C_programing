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

    int i; 
    int count = 0;

    for(i = 1; i<= ***a; i++){
        if(***a % i == 0) count++;
    }
    if(count == 2) return 1;
    return 0;
        

}
