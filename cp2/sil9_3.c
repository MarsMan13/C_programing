#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char *def(char *p, int n);

int main(void){
    
    int i;
    int number;
    char ary[50];
    char *p;

    srand(time(NULL));
    
    scanf("%s", ary);

    for(i = 0; i<5; i++){
        number = (rand()%25 +1);
        p = def(ary, number);
        printf("%d %s\n", number, p);
        free(p);
    }



    return 0;
}

char *def(char p[], int n){
    
    int i = 0;
    char *pp = (char *)calloc(50, sizeof(int));
    
    while(1){
        pp[i] = p[i];
        if(p[i] =='\0')break;
        i++;
    }
    i = 0;

    while(pp[i] != '\0'){
        if(pp[i]>= 'a' && pp[i]<= 'z')
            pp[i] -= ('a' - 'A');
        pp[i] = ((pp[i]+n) > 'Z') ? ('A'+((pp[i]+ n)-'Z')-1) : (pp[i]+n);
        i++;
    }
    return pp;
}
