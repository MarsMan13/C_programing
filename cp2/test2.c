#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack{
    int count;
    struct Stack_node *top;
}STACK;

typedef struct Stack_node{
    int data;
    struct Stack_node *link;
}STACK_NODE;

int push(STACK *stack, int n);
int pop(STACK *stack, int *n);

int main(void){
    
    STACK *stack = (STACK*)malloc(sizeof(STACK));
    stack->count = 0;
    stack->top = NULL;
    int i;
    int temp;

    for(i = 0; i< 10; i++){
        scanf("%d", &temp);
        push(stack, temp);
    }
    for(i = 0; i<10; i++){
        pop(stack, &temp);
        if(temp != 0){
            printf("%d\n", temp);
        }
    }

    return 0;
}

int push(STACK *stack, int n){
    
    STACK_NODE *new = (STACK_NODE *)malloc(sizeof(STACK_NODE));
    new->data = n;
    new->link = NULL;
    
    new->link = stack->top;
    stack->top = new;
    (stack->count)++;
    
    return 0;
}

int pop(STACK *stack, int *n){
    
    STACK_NODE *end = stack->top;
    
    if(stack->top == NULL) return 0;
    else{
        *n = end->data;
        stack->top = end->link;
        free(end);
        (stack->count)--;
    }

}
