#include <stdio.h>


int main(void){

    char a[100];
    char b[100];
    FILE *input1, *input2;
    int count = 0;
    char t, tt;

    printf("Input first file name: ");
    scanf("%s", a);

    printf("Input second file name: ");
    scanf("%s", b);

    input1 = fopen(a, "r");
    if(input1 == NULL) printf("Error\n");
    input2 = fopen(b, "r");
    if(input2 == NULL) printf("Error\n");

    printf("Check1\n");

    while(1){
        while(1){
            fscanf(input1, "%c", &t);
            if((t == '\n') && (t == ' ')) continue;
            else break;
        }
        while(1){
            fscanf(input2, "%c", &tt);
            if((tt == '\n') && (tt == ' ')) continue;
            else break;
        }
        printf("%c %c\n", t, tt);
        if((t == EOF) || (tt == EOF)) break;
        if(t == tt) count++;
    }
    printf("Same character: %d\n", count);

    fclose(input1);
    fclose(input2);


    return 0;
}
