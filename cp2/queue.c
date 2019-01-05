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
int enqueue(QUEUE* pList, int dataIn);
int dequeue(QUEUE* pList, int* dataOut);

int main(void){

    QUEUE * pQueue;
    int sel;
    int temp;

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
            enqueue()
        }
        else if(sel == 2){


        }

    }


    return 0;
}

void insertData(QUEUE* pQueue){

}

void print(QUEUE* pQueue){

}

int enqueue(QUEUE* pList, int dataIn){

}

int dequeue(QUEUE* pList, int* dataOut){

}
