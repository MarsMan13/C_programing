#include <stdio.h>
void sort(int ary[], int n);
int bi(int ary[], int x, int n);

int main(void){
    
    int ary[10];
    int n;
    int i;
    int x;

    scanf("%d", &n);
    
    for(i = 0; i<n; i++)
        scanf("%d", &ary[i]);

    scanf("%d", &x);
    
    printf("\n*******\n%d\n", bi(ary, x, n));


}

void sort(int ary[], int n){
    
    int i, j;
    int temp;

    for(i = 0; i<n; i++){
        for(j = 0; j<n-i -1; j++){
            if(ary[j] > ary[j+1]){
                temp = ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = temp;

            }
        }

    }

}

int bi(int ary[], int x, int n){
    
    int mid;
    int init = 0, fin = n-1;

    sort(ary, n);

    while(init<= fin){
        mid = (init + fin)/2;
        
        if(ary[mid] == x)
            return 1;
        if(ary[mid] < x)
            init = mid +1;
        if(ary[mid] > x)
            fin = mid -1;

    }
    return 0;

}
