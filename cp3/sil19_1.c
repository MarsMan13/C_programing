#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node* nptr;
typedef struct node{
    int data;
    nptr link;

}NODE;

void Insert(nptr*, int);
void PrintAll(nptr head);

int main(void){

    int A[10] = {3, 9, 8, 2, 5, 10, 7, 1, 4, 6};
    nptr head = NULL;
    int i;
    
    for(i = 0; i<10; i++){
        Insert(&head, A[i]);
        PrintAll(head);
    }

    printf("%d\n", head->data);

    return 0;
}

void Insert(nptr* head, int n){
    NODE*end = *head;

    NODE*new = (NODE*)malloc(sizeof(NODE));
    new->data = n;
    new->link = NULL;

    if(*head == NULL){
        *head = new;
    }
    else{
        while(1){
            if(end->link == NULL){
                end->link = new;
                break;
            }
            else end = end->link;
        }
    }

    
    return;
}

void PrintAll(nptr head){

    NODE *end = head;
    while(1){
        printf("%d ", end->data);
        end = end->link;
        if(end == NULL) break;
    }
    printf("\n");

    return;
}
