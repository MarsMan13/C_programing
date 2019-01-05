#include <stdio.h>
#include <stdlib.h>
void def(int a[], int b[][5]);

int main(void){

    int ary1[5];
    int ary2[5][5];
    int i, j;

    for(i = 0; i<5; i++)
        scanf("%d", ary1+i);

    def(ary1, ary2);

    printf("\n");
    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++)
            printf("%d ", *(*(ary2+i)+j));
        printf("\n");
    }


    return 0;
}

void def(int a[], int b[][5]){

    int i, j, k;
    
    for(i = 0; i<5; i++){
        k = i;
        for(j = 0; j<5; j++){
            *(*(b+i)+j) = *(a +(k%5));
            k++;
        }
    }


}
