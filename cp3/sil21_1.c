#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node *nptr;
typedef struct node{
    int data;
    struct node *link;
}NODE;

void Insert(NODE **, int);
void Delete(NODE **);
void PrintAll(NODE *);


int main(void){

    int A[10] = {3, 9, 8, 2, 5, 10, 7, 1, 4, 6};
    int i;
    NODE *head = NULL;

    for(i = 0; i<10; i++){
        Insert(&head, A[i]);
    }
    PrintAll(head);

    for(i = 0; i<10; i++){
        Delete(&head);
        PrintAll(head);
    }

    return 0;
}

void Insert(NODE **head, int n){
    NODE *end = *head;
    NODE *new = (NODE *)malloc(sizeof(NODE));
    new->data = n;
    new->link = NULL;

    if(*head == NULL) *head = new;
    else{
        while(1){
            if(end->link == NULL){
                end->link = new;
                break;
            }
            end = end->link;
        }
    }

    return;
}

void Delete(NODE **head){
    NODE*end = *head;
    *head = (*head)->link;
    free(end);
}

void PrintAll(NODE *head){
    NODE *end = head;

    if(head == NULL){
        printf("Empty\n");   
        return;
    }
    while(1){
        printf("%d ", end->data);
        if(end->link == NULL) break;
        end = end->link;
    }
    printf("\n");
    return;
}
