#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void multiply (int ary1[4][4], int ary2[4][4], int ary3[4][4]);

int main (void){

    int arr1[4][4], arr2[4][4], arr3[4][4] = {0};
    int i, j;
    
    printf("First matrix : \n");
    for(i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &arr1[i][j]);        
        }
    }
    
    printf("Second matrix : \n");
    for(i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &arr2[i][j]);        
        }
    }

    multiply(arr1, arr2, arr3);
    
    printf("Result : \n");
    for(i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("4%d   ", arr3[i][j]);        
        }
        printf("\n");
    }
    


}


void multiply (int ary1[4][4], int ary2[4][4], int ary3[4][4]){
    int i, j, k;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            for (k = 0; k < 4; k++){
                ary3[i][j] += ary1[i][k]* ary2[k][j];
            }
        }
    }

    return;
}
