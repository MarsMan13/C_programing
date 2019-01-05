#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void){
    int arr[3][3];
    int input;
    int i, j;
    srand(time(NULL));

    for (i = 0; i < 3; i++){
        for(j = 0; j<3;j++){
            arr[i][j] = rand()%10;
        }
    }
    
    printf("Input any integer: ");
    scanf("%d", &input);

    
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if (arr[i][j] < input){
                arr[i][j] = 0;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
