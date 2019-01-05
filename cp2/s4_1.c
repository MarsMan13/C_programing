#include <stdio.h>
#include <stdlib.h>


int main(void){

    int *p;
    int n;
    int i;
    int start, end;
    int left, right;

    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));

    for(i = 0; i<n; i++)
        scanf("%d", p+i);

    //
    start = 0;
    end = n-1;
    do{
        left = start + (end - start)/3;
        right = start + (end - start)/3*2;
        
        if(*(p+left) > *(p+right))
            end = right;
        else
            start = left;

    }while(end - start >2);
    
    printf("The MAX value is %d at index %d\n", *(p+start+1), start+1);




    return 0;
}
