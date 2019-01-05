#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int data;
    struct node* next;
}QUEUE_NODE;

typedef struct{
    QUEUE_NODE* front;
    int count;
    QUEUE_NODE* rear;
}QUEUE;

void Exit(QUEUE *q);
void Enqueue(QUEUE *q);
void PrintAll(QUEUE q);

int main(void){

    int sel;
    QUEUE* q = (QUEUE*)malloc(sizeof(QUEUE));
    printf("****** Menu ******\n");
    printf("* 0 : Exit       *\n");
    printf("* 1 : Enqueue    *\n");
    printf("* 2 : ---------  *\n");
    printf("* 3 : Print All  *\n");
    printf("******************\n");


    while(1){
        printf("Select > ");
        scanf("%d", &sel);
        switch(sel){
            case 0 :
                Exit(q);
                return 0;
            case 1 :
                Enqueue(q);
                break;
            case 2 :
                break;
            case 3 :
                PrintAll(*q);
                break;
        }
    }

    return 0;
}

void Exit(QUEUE *q){
    QUEUE_NODE *end1 = q->front;    
    QUEUE_NODE *end2 = q->front;

    if(end1 == NULL){
        free(q);
        return;
    }
    else if(end1->next == NULL){
        free(end1);
        free(q);
        return;
    }
    else{
        while(1){
            free(end2);
            end1 = end1->next;
            if(end1 == NULL){
                free(end1);
                free(q);
                return;
            }
            end2 = end1;

        }

    }
}

void Enqueue(QUEUE *q){
    QUEUE_NODE *new = (QUEUE_NODE*)malloc(sizeof(QUEUE_NODE));
    int temp;
    printf("Input Data > ");
    scanf("%d", &temp);
    new->data = temp;
    new->next = NULL;

    if(q->front == NULL){
        q->front = new;
        q->rear = new;
        (q->count)++;
    }
    else{
        q->rear->next = new;
        q->rear = new;
        (q->count)++;
    }
}

void PrintAll(QUEUE q){
    
    QUEUE_NODE *end = q.front;
    
    if(end == NULL) return;
    else{
        while(1){
            printf("%d ", end->data);
            if(end->next == NULL) break;
            end = end->next;
        }
        printf("\n");
    }
}
