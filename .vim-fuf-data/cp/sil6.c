#include <stdio.h>
void f(int *, int *, int *, int);

int main(void){

    int H, M, S;
    int T;

    scanf("%d %d %d %d", &H, &M, &S, &T);

    f(&H, &M, &S, T);

    printf("%02d:%02d:%02d\n", H, M, S);

    return 0;
}

void f(int *H, int *M, int *S, int T){
    
    T += *H*3600 + *M*60 + *S;

    *H = T/60/60;
    *M = (T-=*H*60*60)/60;
    *S = (T-=*M*60);
}
