#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node* nptr;

typedef struct{
    int count;
    nptr link;
}STACK;

typedef struct node{
    char data;
    nptr link;
}STACK_NODE;

void Push(STACK *, char);
int Pop(STACK *);


int main(void){

    char str[101];
    STACK *stack = (STACK *)malloc(sizeof(STACK));
    stack->count = 0;
    stack->link = NULL;
    int i;
    scanf("%s", str);

    i = 0;
    while(1){
        if(str[i] == '\0') break;
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            Push(stack, str[i]);
        }   
        else if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
            if(stack->link == NULL){
                printf("Unmatched Parenthese!\n");
                return 0;
            }
            Pop(stack);
        }
        i++;
    }

    if(stack->link != NULL){
        printf("Unmatched Parenthese!\n");
        return 0;
    }

    printf("Matched Parentheses!\n");
    
    return 0;
}

void Push(STACK *stack, char c){
    STACK_NODE *new = (STACK_NODE*)malloc(sizeof(STACK_NODE));
    new->data = c;
    new->link = NULL;

    new->link = stack->link;
    stack->link = new;
    (stack->count)++;

    return;
}

int Pop(STACK *stack){
    STACK_NODE *end = stack->link;

    if(stack->link == NULL) return 0;
    else{
        stack->link = stack->link->link;
        free(end);
        (stack->count)--;
    }
}
