#include <stdio.h>
#include <stdlib.h>
int* get_new_array(int size);
void get_new_array_call_by_value(int *a, int size);
void get_new_array_call_by_reference(int **a, int size);
void print_state(int *a);


int main(void){

    int *a = NULL;
    print_state(a);

    get_new_array_call_by_value(a, 10);
    print_state(a);
    free(a);

    get_new_array_call_by_reference(&a, 10);
    print_state(a);
    free(a);

    a= get_new_array(10);
    print_state(a);
    free(a);

    return 0;
}

void get_new_array_call_by_value(int *a, int size){
    
    a = (int *)malloc(sizeof(int) * size);
}

void get_new_array_call_by_reference(int **a, int size){
    
    *a = (int *)malloc(sizeof(int) * size);
}

int* get_new_array(int size){
    

    int *x = (int *)malloc(sizeof(int) * size);
    return x;
}

void print_state(int *a){
    
    if(a == NULL) printf("not allocated\n");
    else printf("allocated\n");
    
    return;
}

