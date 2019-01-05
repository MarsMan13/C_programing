#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char *def(char *p, int n);

int main(void){
    
    int i;
    int number;
    char *ary;

    srand(time(NULL));
    
    scanf("%s", ary);

    for(i = 0; i<5; i++){
        number = (rand()%25 +1);
      //  p = def(ary, number);
        printf("%d %s\n", number, def(ary, number));
    }



    return 0;
}

char *def(char p[], int n){
    
    int i = 0;
 //   char *pp = (char *)calloc()

    while(p[i] != '\0'){
        if(p[i]>= 'a' && p[i]<= 'z')
            p[i] -= ('a' - 'A');
        p[i] = (p[i]+n) > 'Z' ? p[i]+((p[i]+ n)%'Z') : p[i]+n;
        i++;
    }
    return p;
}
