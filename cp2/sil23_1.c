#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{

    int data;
    struct node* next;

}QUEUE_NODE;

typedef struct{
    QUEUE_NODE *front;
    int count;
    QUEUE_NODE *rear;
}QUEUE;

void Exit(QUEUE *);
void Enqueue(QUEUE *);
void PrintAll(QUEUE *);

int main(void){
    
    printf("****** Menu ******\n");
    printf("* 0 : Exit       *\n");
    printf("* 1 : Enqueue    *\n");
    printf("* 2 : -------    *\n");
    printf("* 3 : Print All  *\n");
    printf("******************\n");
    
    int sel;
    QUEUE *q = (QUEUE*)malloc(sizeof(QUEUE));
    q->front = q->rear = NULL;
    q->count = 0;

    while(1){
        printf("Select > ");
        scanf("%d", &sel);
        while(getchar() != '\n');
        switch(sel){
            case 0:
                Exit(q);
                return 0;
            case 1:
                Enqueue(q);
                break;
            case 3:
                PrintAll(q);
                break;
        }
    }

    return 0;
}

void Exit(QUEUE *q){
    QUEUE_NODE *end = q->front;
    QUEUE_NODE *end2 = q->front;
    int i;
  
    for(i = 0; i< (q->count); i++){
        end2 = end->next;
        free(end);
        end = end2;
    }
    free(end2);
    free(q);
}

void Enqueue(QUEUE *q){
    int temp;
    
    printf("Input Data > ");
    scanf("%d", &temp);

    QUEUE_NODE *new = (QUEUE_NODE *)malloc(sizeof(QUEUE_NODE));
    new->data = temp;
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
    return;
}
void PrintAll(QUEUE *q){
    QUEUE_NODE *end = q->front;
    int i;
    for(i = 0; i< (q->count); i++){
        printf("%d ", end->data);
        end = end->next;
    }
    printf("\n");
    printf("Queue Level : %d\n", q->count);
    
    return;
}
