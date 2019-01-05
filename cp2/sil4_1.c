#include <stdio.h>
void shift_right(int *a);
void shift_n_right(int *a, int n);
void print_array(int *a);


int main(void){

    int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n;

    scanf("%d", &n);

    shift_n_right(ary, n);
    print_array(ary);

    return 0;
}

void shift_n_right(int *a, int n){
    
    int i;
    for(i = 0; i<n; i++)
        shift_right(a);

    return;
}

void shift_right(int *a){
    
    int top = *(a + 9);
    int i = 0;
    
    for(i = 8; i>=0; i--){
        printf("%d ", i);
    }
    *(a + 0) = top;
}

void print_array(int *a){

    int i;

    for(i = 0; i<10; i++)
        printf("%d ", *(a + i));
    printf("\n");
}


