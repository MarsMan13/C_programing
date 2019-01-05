#include <stdio.h>
#include <stdlib.h>


int main(void){

    int cal[6][7] = {0};
    int i, j;
    int n;
    int count = 1;

    printf("ENter the first day of the month: ");
    scanf("%d", &n);

    for(i = 0; i<6; i++){
        for(j = n; j<7; j++){
            if(count >31) break;
            cal[i][j] = count;
            count++;
        }
        n = 0;
    }

    //
    
    
    printf("Generated calendar:\n");
    printf(" S  M  T  W  T  F  S\n");
    for(i = 0; i<6; i++){
        for(j = 0; j<7; j++){
            if(*(*(cal+i)+j)== 0)
                printf("   ");
            else
                printf("%2d ", *(*(cal+i)+j));
        }
        printf("\n");
    }


    return 0;
}
