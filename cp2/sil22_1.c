#include <stdio.h>
#include <stdlib.h>


typedef struct node* sptr;
typedef struct{

    int count;
    sptr link;

}STACK;

typedef struct node{

    int data;
    sptr link;

}STACK_NODE;


void EXIT(STACK *);
void Push(STACK *, int data);
int Pop(STACK *);
void PrintAll(STACK *);

int main(void){

    int sel = -1;
    int temp;
    STACK *lifo = (STACK*)malloc(sizeof(STACK));
    lifo->count = 0;
    lifo->link = NULL;


    printf("****** Menu ******\n");
    printf("* 0 : Exit        \n");
    printf("* 1 : Push       *\n");
    printf("* 2 : Pop        *\n");
    printf("* 3 : Print All  *\n");
    printf("******************\n");

    while(1){
        printf("Select >");
        scanf("%d", &sel);
        
        if(sel == 1){
            printf("Input Data >");
            scanf("%d", &temp);
            Push(lifo, temp);
        }
        else if(sel == 2){
            temp = Pop(lifo);
            printf("Pop %d\n", temp);
        }
        else if(sel == 3){
            PrintAll(lifo); 
        }
        else{
            return 0;
        }
    }


    return 0;
}


void EXIT(STACK *top){
    STACK_NODE *temp = top->link;
    STACK_NODE *temp2 = top->link->link;

    while(temp2 != NULL){
        free(temp);
        temp = temp2;
        temp2 = temp2->link;
    }
    free(temp);
    free(top);
}


void Push(STACK *top, int data){

    STACK_NODE *new = (STACK_NODE *)malloc(sizeof(STACK_NODE));
    new->data = data;
    new->link = NULL;

    new->link = top->link;
    top->link = new;
}

int Pop(STACK *top){
    
    int value;

    if(top->link != NULL){

        value = top->link->data;

        STACK_NODE *temp = top->link->link;
    
        free(top->link);
        top->link = temp;

        return value;
    }
    else{
        printf("No pop\n");
        return;
    }

}

void PrintAll(STACK *top){
    
    if(top == NULL){
        printf("Stack is Empty!\n");
        return;
    }
    if(top->link == NULL){
        printf("Stack is Empty!\n");
        return;
    }

    STACK_NODE *end = top->link;

    while(end != NULL){
        printf("%d ", end->data);
        end = end->link;
    }
    printf("\n");
}
