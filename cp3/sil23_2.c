#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char command[10];
    struct node* next;

}QUEUE_NODE;

typedef struct{
    QUEUE_NODE* front;
    int count;
    QUEUE_NODE* rear;
}QUEUE;

int CheckCommand(char *command);
void EnqueueCommand(QUEUE* pQueue, char *dataIn);

int main(void){
    
    char command[10];
    int check;
    QUEUE* pQueue;
    pQueue = (QUEUE*)malloc(sizeof(QUEUE));
    
    pQueue->front = NULL;
    pQueue->count = 0;
    pQueue->rear = NULL;
    

    while(1){
        printf(">>");
        scanf("%s", command);
        check = CheckCommand(command);
        if(check == 0){
            printf("[Invalid]\n");
        }
        else if(check == 1){
            if(strcmp(command, "h") == 0|| strcmp(command, "history") == 0){
                printf("queue count = %d\n", pQueue->count);
            }
            else if(strcmp(command, "q") == 0 || strcmp(command, "quit") == 0) return 0;
            else{
                printf("[Valid] %s\n", command);
                EnqueueCommand(pQueue, command);
            }
        }
    }

    return 0;
}

int CheckCommand(char *command){
    
    if(strcmp(command, "h") == 0 || strcmp(command, "q") == 0) return 1;
    if(strcmp(command, "help") == 0 || strcmp(command, "dir") == 0 || strcmp(command, "mkdir") == 0 || strcmp(command, "cd") == 0 || strcmp(command, "history") == 0 || strcmp(command, "quit") == 0){

        return 1;
    }

    return 0;
}

void EnqueueCommand(QUEUE* pQueue, char *dataIn){
    QUEUE_NODE* new = (QUEUE_NODE*)malloc(sizeof(QUEUE_NODE));
    strcpy(new->command, dataIn);
    new->next = NULL;

    if(pQueue->front == NULL){
        pQueue->front = pQueue->rear = new;
        (pQueue->count)++;
    }
    else{
        pQueue->rear->next = new;
        pQueue->rear = new;
        (pQueue->count)++;
    }

}
