#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int data;
    struct node *next;

}QUEUE_NODE;

typedef struct queue{

    QUEUE_NODE *front;
    int count;
    QUEUE_NODE *rear;

}QUEUE;

int enqueue(QUEUE *q, int dataIn);
int dequeue(QUEUE *q);

int main(void){

    QUEUE *q = (QUEUE*)malloc(sizeof(QUEUE));
    q->front = NULL;
    q->count = 0;
    q->rear = NULL;
    int input;
   
    while(1){
        scanf("%d", &input);
        if(input == 0) break;
        else{
            enqueue(q, input);

        }
    }

    while(1){
        if(q->front == NULL) break;
        printf("%d ", dequeue(q));

    }
    printf("\n");
    

    return 0;
}

int enqueue(QUEUE *q, int dataIn){
    
    QUEUE_NODE* new = (QUEUE_NODE *)malloc(sizeof(QUEUE_NODE));
    new->data = dataIn;
    new->next = NULL;

    if(q->count == 0){
        q->front = new;
        q->rear = new;
        (q->count)++;
    }
    else{ 
        q->rear->next = new;
        q->rear = new;       
        (q->count)++;
    }
    
    return 0;
}

int dequeue(QUEUE *q){
        
    QUEUE_NODE *end = q->front;
    int temp;

    if(end == NULL) return -1;
    if(q->count == 1){
        q->rear = q->front = NULL;
        temp = end->data;
        free(end);
        (q->count)--;
    }

    else{
        temp = end->data;
        q->front = q->front->next;
        free(end);
        (q->count)--;
    }
    return temp;
}
