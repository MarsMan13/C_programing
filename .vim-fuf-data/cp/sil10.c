#include <stdio.h>
void shift_right(int *);
void shift_n_right(int *, int);
void print_array(int*);


int main(void){
    
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    int n;

    scanf("%d", &n);

    shift_n_right(a, n);

    return 0;
}

void shift_right(int *a){
    int n;
    int top = a[9];

    for(n = 0; n<10; n++){
        a[9-n] = a[8-n];
    }
    a[0]= top;
}

void shift_n_right(int *a, int n){
    for(n; n>0; n--){
        shift_right(a);
    }
    print_array(a);
}

void print_array(int *a){
    
    int n;
    for(n = 0; n<10; n++)
        printf("%d ", a[n]);
    printf("\n");
}
