#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int n = 10;

void def(int ary[]);                    // initailizing function
int def2(int ary[], int x, int mode); // binarysearch function
void sort(int ary[]);
void def3(int ary[]);                   // printing function

int main(void){
    
    int *ary;
    ary = (int *)calloc(n, sizeof(int));

    int x;

    srand(time(NULL));
    
    def(ary); 
    printf("Enter the number that you find in the array : ");
    scanf("%d", &x);
    
    printf("index is %d\n", def2(ary, x, 1));

    def3(ary);

    return 0;
}

void def(int ary[]){
    
    int i;
    int in;

    for(i = 0; i<n; i++){
        while(1){
            in = (rand()%20 +1);
            if(def2(ary, in, 0) == 1){
                ary[0] = in;
                break;
            }

        }

    }
    
    return;
}

int def2(int ary[], int x, int mode){
    
    int mid;
    int fin = n-1, init = 0;
    sort(ary);

    while(init <= fin)
    {
        mid = (init+fin)/2;
        /////

        if(ary[mid] == x){
            if(mode == 1){
                return mid;
            }
            return 0;
        }
        
        if(ary[mid] < x){
            init = mid+1;
        }
        if(ary[mid] > x){
            fin = mid-1;
        }

    }
    if(mode == 1){
        printf("There is no %d in this array\n", x);
        return -1;
    }
    return 1;
}

void sort(int ary[]){
    
    int i, j;
    int temp;

    for(i = 0; i<n; i++){
        for(j = 0; j<n-i-1; j++){
            if(ary[j] > ary[j+1]){
                temp = ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = temp;
            }
        }
    }

    return;
}

void def3(int ary[]){
    
    int i;
    
    for(i = 0; i<n; i++)
        printf("%02d ", ary[i]);
    printf("\n");

    return;
}
