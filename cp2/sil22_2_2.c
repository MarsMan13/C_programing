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
    STACK* lifo = (STACK *)malloc(sizeof(STACK));
    int i;
    char temp;

    scanf("%s", str);
    
    for(i = 0; i<strlen(str); i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            Push(lifo, str[i]);
        }
        else if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
            if(lifo->link == NULL){
                printf("Unmatched Parentheses!\n");
                return 0;
            }
            if(str[i] == ')'){
                if('(' != Pop(lifo)){
                    printf("Unmatched Parentheses!\n");
                    return 0;
                }
            }
            else if(str[i] == '}'){
                if('{' != Pop(lifo)){
                    printf("Unmatched Parentheses!\n");
                    return 0;
                }
            }
            else if(str[i] == ']'){
                if('[' != Pop(lifo)){
                    printf("Unmatched Parentheses!\n");
                    return 0;
                }
            }
        }
    }
    if(lifo->link != NULL){
        printf("Unmatched Parentheses!\n");
        return 0;
    }



    printf("Matched Parentheses!\n");



    return 0;
}


void Push(STACK *top, char d){
    STACK_NODE* new = (STACK_NODE*)malloc(sizeof(STACK_NODE));
    new->data = d;
    new->link = top->link;
    top->link = new;
}

int Pop(STACK *top){
    
    int cc = top->link->data;
    STACK_NODE *temp = top->link->link;
    free(top->link);
    top->link = temp;

    return cc;
}
