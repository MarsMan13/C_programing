#include <stdio.h>
#include <stdlib.h>

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

    for(i = 0; i<10; i++){
        PrintAll(head);
        Delete(&head);
    }
    PrintAll(head);
    if(head == NULL) free(head);
    return 0;
}

void Insert(NODE **head, int n){
   
    NODE *new = (NODE *)malloc(sizeof(NODE));
    new->data = n;
    new->link = NULL;
    NODE *end = (*head);

    if((*head) == NULL){
        (*head) = new;
    }
    else{
        while(end->link != NULL){
            end = end->link;
        }   
        end->link = new;
    }

}

void Delete(NODE **head){
   
    NODE* temp = (*head)->link;
    
    free((*head));
    (*head) = temp;
    
}

void PrintAll(NODE *head){
    
    NODE *end = head;
    
    if(end == NULL){
        printf("Empty\n");
        return;
    }

    while(end->link != NULL){
        printf("%d ", end->data);
        end = end->link;
    }
    printf("%d\n", end->data);
    
    return;
}

