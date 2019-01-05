#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int data;
    struct node* next;

}QUEUE_NODE;

typedef struct{

    QUEUE_NODE* front;
    int count;
    QUEUE_NODE* rear;


}QUEUE;

void insertData(QUEUE* pQueue);
void print(QUEUE* pQueue);
int enqueue(QUEUE* pQueue, int dataIn);
int dequeue(QUEUE* pQueue, int* dataOut);

int main(void){

    QUEUE * pQueue;
    int sel;
    int temp;
    int dataOut;

    printf("Beginning Simple Queue Program\n");

    pQueue = (QUEUE*)malloc(sizeof(QUEUE));

    pQueue->front = NULL;
    pQueue->count = 0;
    pQueue->rear = NULL;

    while(1){
        printf("ENter the sel : ");
        scanf("%d", &sel);
        if(sel == 0){
            print(pQueue);
            printf("Program is ended\n");
            break;
        }
        else if(sel == 1){
            printf("ENter the enqueue Num : ");
            scanf("%d", &temp);
            enqueue(pQueue, temp);
            print(pQueue);
        }
        else if(sel == 2){
            dequeue(pQueue, &dataOut);
            printf("The dataOut by dequeue op is %d\n", dataOut);
            print(pQueue);
        }

    }


    return 0;
}

void insertData(QUEUE* pQueue){

}

void print(QUEUE* pQueue){

    int i;
    QUEUE_NODE* end = pQueue->front;

    for(i = 0; i<pQueue->count; i++){
        printf("%d ", end->data);
        end = end->next;
    }
    printf("\n");

    return;

}

int enqueue(QUEUE* pQueue, int dataIn){

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
    return 0;
}

int dequeue(QUEUE* pQueue, int* dataOut){

    QUEUE_NODE* deleteLoc;
    if(pQueue->count == 0) return 0;

    *dataOut = pQueue->front->data;
    deleteLoc = pQueue->front;
    if(pQueue->count == 1){
        pQueue->rear = NULL;
        pQueue->front = NULL;
        (pQueue->count)--;
    }
    else{
        pQueue->front = pQueue->front->next;
        (pQueue->count)--;
    }
    free(deleteLoc);

    return 0;
}


