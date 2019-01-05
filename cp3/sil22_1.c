#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node *sptr;

typedef struct{
    int count;
    sptr link;
}STACK;

typedef struct node{
    int data;
    sptr link;
}STACK_NODE;

void EXIT(STACK *top);
void Push(STACK *top, int data);
int Pop(STACK *top);
void PrintAll(STACK);


int main(void){


    printf("****** Menu ******\n");
    printf("* 0 : Exit       *\n");
    printf("* 1 : Push       *\n");
    printf("* 2 : Pop        *\n");
    printf("* 3 : Print All  *\n");
    printf("******************\n");

    while(1)

    return 0;
}
