#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int data;
    struct node* next;
}QUEUE_NODE;

typedef strcut queue{

    QUEUE_NODE* front;
    int count;
    QUEUE_NODE* rear;

}QUEUE;

void enqueue(QUEUE *pQueue, int dataIn);
void dequeue(QUEUE *pQueue, int *dataOut);
void printf(QUEUE *pQueue);

int main(void){

    QUEUE *pQueue = (QUEUE *)malloc(sizeof(QUEUE));
    QUEUE->front = NULL;
    QUEUE->rear = NULL;
    QUEUE->count = 0;

    int sel;
    int temp;

//
    printf("This program is for QUEUE test!\n");
    
    printf("option num: ------------\n");
    printf("0 : quit\n");
    printf("1 : enqueue\n");
    printf("2 : dequeue\n");

    while(1){
        printf("Enter the option Num: ");
        scanf("%d", &sel);
        if(sel == 0){
            return 0;
        }
        else if(sel == 1){
            printf("  Enter the adding num : ");
            scanf("%d", &temp);
            enqueue(pQueue, temp);
            print(pQueue);
        }
        else if(sel == 2){

////////////////
        }

    }
    

    return 0;
}

void enqueue(QUEUE *pQueue, int dataIn){
    
    QUEUE_NODE* new = (QUEUE_NODE*)malloc(sizeof(QUEUE_NODE));
    new->data = dataIn;
    new->next = NULL;
    
    if(pQueue->count == 0){
        pQueue->front = new;
        pQueue->rear = new;
    }
    else{
        pQueue->rear->next = new;
        pQueue->rear = new;
    }
    (pQueue->count)++;
    
    return;
}

void dequeue(QUEUE *pQueue, int *dataOut){

}

void printf(QUEUE *pQueue){
    
    QUEUE_NODE *end = pQueue->front;

    if(end == NULL) return;
    else{
        while(1){
            if(end->link != NULL){
                printf("%d ", end->data);
                end = end->next;
            }
        }
        printf("%d\n", end->data);
    }
    return;
}
