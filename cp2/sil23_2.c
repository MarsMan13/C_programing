#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char command[10];
    struct node* next;
}QUEUE_NODE;

typedef struct queue{
    QUEUE_NODE *front;
    int count;
    QUEUE_NODE *rear;
}QUEUE;

int CheckCommand(char *command);
void EnqueueCommand(QUEUE* pQueue, char *dataIn);

int main(void){

    char command[10];
    
    QUEUE *pQueue;
    
    pQueue = (QUEUE *)malloc(sizeof(QUEUE));
    pQueue->front = pQueue->rear = NULL;
    pQueue->count = 0;

    while(1){
        printf(">>");
        scanf("%s", command);
        if(CheckCommand(command) == 1){
            if(strcmp(command, "quit") == 0 || strcmp(command, "q") == 0) return 0;
            if(strcmp(command, "history") != 0 && strcmp(command, "h") != 0)
            {
                EnqueueCommand(pQueue, command);
            }
            else{
                printf("queue count = %d\n", pQueue->count);
            }
        
        }
        else{
            printf("[Invalid]\n");
        }
        while(getchar() != '\n');
    }

    return 0;
}

int CheckCommand(char *command){
    if(strcmp(command, "help") == 0){
        printf("[Valid] %s\n", command);
        return 1;
    }
    else if(strcmp(command, "dir") == 0){
        printf("[Valid] %s\n", command);
        return 1;
    }
    else if(strcmp(command, "mkdir") == 0){
        printf("[Valid] %s\n", command);
        return 1;
    }
    else if(strcmp(command, "cd") == 0){
        printf("[Valid] %s\n", command);
        return 1;
    }
    else if(strcmp(command, "history") == 0){
        return 1;
    }
    else if(strcmp(command, "h") == 0){
        return 1;
    }
    else if(strcmp(command, "quit") == 0){
        return 1;
    }
    else if(strcmp(command, "q") == 0){
        return 1;
    }

    return 0;

}

void EnqueueCommand(QUEUE* pQueue, char *dataIn){
    QUEUE_NODE *new = (QUEUE_NODE*)malloc(sizeof(QUEUE_NODE));
    strcmp(new->command, dataIn);
    new->next = NULL;

    if(pQueue->count == 0){
        pQueue->front = pQueue->rear = new;
        (pQueue->count)++;
    }
    else{
        pQueue->rear->next = new;
        pQueue->rear = new;
        (pQueue->count)++;
    }
    
}
