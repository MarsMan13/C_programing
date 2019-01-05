#include <stdio.h>


int main(void){

    FILE *sp;
    char c;
    int a;
    int i, j, k;

    sp = fopen("test.txt", "w");
    
    if(sp == NULL) printf("Its over\n");
    else printf("Its okay\n");

    while(1){
        scanf("%d %d %d", &i, &j, &k);
        if(i == 19) break;

        fprintf(sp, "%d %d %d", i, j, k);
    }

    a = fclose(sp);
    if(a != 0) printf("closing Error\n");

    return 0;
}
