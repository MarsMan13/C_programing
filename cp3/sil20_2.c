#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node* nptr;
typedef struct node{
    int data;
    nptr link;
}NODE;

void Insert(nptr* head, int n);
void PrintAll(nptr head);
void Sort(nptr* head);

int main(void){
    
    int A[10] = {3, 9, 8, 2, 5, 10, 7, 1, 4, 6};
    int i;
    NODE *head = NULL;

    for(i = 0; i<10; i++){
        Insert(&head, A[i]);
    }
    PrintAll(head);
    Sort(&head);
    PrintAll(head);

    return 0;
}

void Insert(nptr* head, int n){
    NODE *new = (NODE*)malloc(sizeof(NODE));
    new->data = n;
    new->link = NULL;
    NODE *end = *head;

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

}

void PrintAll(nptr head){
    NODE *end = head;

    if(head == NULL) return;
    else{
        while(1){
            printf("%d ", end->data);
            if(end->link == NULL) break;
            end = end->link;
        }
        printf("\n");
    }
    return;
}

void Sort(nptr* head){

    NODE *end1 = *head;   
    NODE *end2 = *head;   
    int i, j, k;
    int temp;

    for(i = 0; i<10; i++){
        for(j = 0; j<10-i-1; j++){
            end1 =*head;
            for(k = 0; k<j; k++){
                end1 = end1->link; 
            }
            end2 = end1->link;
            if((end1->data) > (end2->data)){
                temp = end1->data;
                end1->data = end2->data;
                end2->data = temp;
            }
        }
    }
}
