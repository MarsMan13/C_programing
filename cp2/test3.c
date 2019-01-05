#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node *sptr;

typedef struct{
    int count;
    sptr top;
}STACK;

typedef struct node{
    int data;
    sptr link;
}STACK_NODE;

void EXIT(STACK *stack);
void Push(STACK *stack, int data);
int Pop(STACK* stack);
void PrintAll(STACK stack);

int main(void){
    
    int sel, data;
    STACK *stack = (STACK *)malloc(sizeof(STACK));

    printf("******* Menu ******\n");
    printf("* 0 : Exit        *\n");
    printf("* 1 : Push        *\n");
    printf("* 2 : Pop         *\n");
    printf("* 3 : Print All   *\n");
    printf("*******************\n");
    
    while(1){
        printf("Select > ");
        scanf("%d", &sel);
        switch(sel){
            case 0 :
                EXIT(stack);
                return 0;
            case 1 :
                printf("Input Data > ");
                scanf("%d", &data);
                Push(stack, data);
                break;
            case 2 :
                printf("%d\n", Pop(stack));
                break;
            case 3 :
                PrintAll(*stack);
                break;
        }

    }
     

    return 0;
}

void EXIT(STACK *stack){
    STACK_NODE*end1 = stack->top;
    STACK_NODE*end2 = stack->top;

    if(stack->top == NULL){
        free(stack);
        return;
    }
    else{
        while(1){
            end1 = end1->link;
            free(end2);
            end2 = end1;
            if(end1 == NULL){
                free(stack);
                return;
            }
        }
    }
}

void Push(STACK *stack, int data){
    STACK_NODE *new = (STACK_NODE*)malloc(sizeof(STACK_NODE));
    new->data = data;
    new->link = NULL;

    new->link = stack->top;
    stack->top = new;
    (stack->count)++;

}

int Pop(STACK* stack){
    int temp;
    if(stack->link != NULL){
        STACK_NODE *end = stack->top;
        stack->top = stack->top->link;
        temp = end->data;
        free(end);
        (stack->count)--;
        return temp;
    }
    else{
        printf("No pop\n");
        return;
    }
}

void PrintAll(STACK stack){
    STACK_NODE *end;

    if(stack.top == NULL) return;
    else{
        end = stack.top;
        while(1){
            printf("%d ", end->data);
            if(end->link == NULL) break;
            end = end->link;
        }
        printf("\n");
    }
}
