#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int n_dim;
    int *coef;
}POLY;

void make_poly(POLY* input);
void do_that(POLY* input, POLY* output);

int main(void){

    POLY input;
    POLY output;
    int i;

    printf("Input N: ");
    scanf("%d", &(input.n_dim));
    
    output.n_dim = ((input.n_dim)-1);
    
    make_poly(&input);
    make_poly(&output);
    //
    printf("Input Coefficient: ");
    for(i = 0; i< (input.n_dim+1); i++){
        scanf("%d", &(input.coef)[i]);
    }

    do_that(&input, &output);
    printf("Output: ");
    for(i = 0; i< (output.n_dim +1); i++){
        printf("%d ", (output.coef)[i]);
    }
    printf("\n");

    free(input.coef);
    free(output.coef);

    return 0;
}


void make_poly(POLY* input){
    
    int high = (*input).n_dim;
    
    (*input).coef = (int *)malloc((high -1) *sizeof(int));

}

void do_that(POLY* input, POLY* output){
    int i;
    for(i = 0; i< ((*output).n_dim+1); i++){
        (*output).coef[i] = (*input).coef[i] * ((*input).n_dim - i);
    }

}
