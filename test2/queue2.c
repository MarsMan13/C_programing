#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}QUEUE_NODE;

typedef struct queue{
    
    QUEUE_NODE *front;
    int count;
    QUEUE_NODE *rear;

}QUEUE;

void insertData(QUEUE *q);
void print(QUEUE *q);
int enqueue(QUEUE *q, int input);
int dequeue(QUEUE *q, int *output);

int main(void){
    
    int output;
    QUEUE *q = (QUEUE *)malloc(sizeof(QUEUE));
    q->front = q->rear = NULL;
    q->count = 0;

    printf("--- Beginning simple Queue testing Program ---\n");

    insertData(q);
    print(q);
    
    while(1){
        if(q->count == 0) break;
        else{
            dequeue(q, &output);
            printf("%d\n", output);
        }
    }
    print(q);

    return 0;
}

void insertData(QUEUE *q){
    int num;
    
    printf("--- oo Creating number oo ---\n: ");
    for(int i = 0; i<5; i++){
        num = rand()%1000;
        printf("%4d", num);
        enqueue(q, num);

    }
    printf("\n");
    return;
}

void print(QUEUE *q){
    int i;
    QUEUE_NODE *end = q->front;

    for(i = 0; i < (q->count); i++){
        printf("%d ", end->data);
        end = end->next;
    }
    printf("\n");
    return;
}

int enqueue(QUEUE *q, int input){
    
    QUEUE_NODE *new = (QUEUE_NODE *)malloc(sizeof(QUEUE_NODE));
    new->data = input;
    new->next = NULL;

    if((q->count) == 0){
        q->front = q->rear = new;
        (q->count)++;
    }
    else{
        q->rear->next = new;
        q->rear = new;
        (q->count)++;
    }

    return 0;
}

int dequeue(QUEUE *q, int *output){
    
    QUEUE_NODE *end = q->front;

    if(q->count == 1){
        q->front = q->rear = NULL;
        *output = end->data;
        free(end);
    }
    else{
        q->front = q->front->next;
        *output = end->data;
        free(end);
    }
    (q->count)--;

    return 0;
}
