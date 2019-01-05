#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    
    int data;
    struct node* link;

}NODE;

typedef NODE* nptr;

void Insert(nptr* head, int data, int index);
void PrintAll(nptr head);

int main(void){

    int A[10] = {3, 9, 8, 2, 5 ,10, 7, 1, 4, 6};
    NODE* head = NULL;

    Insert(&head, A[0], 0);
    Insert(&head, A[1], 0);
    Insert(&head, A[2], 1);
    Insert(&head, A[3], 2);
    Insert(&head, A[4], 0);
    Insert(&head, A[5], 1);
    Insert(&head, A[6], 10);
    Insert(&head, A[7], 4);
    Insert(&head, A[8], -1);
    Insert(&head, A[9], 3);

    
    return 0;
}

void Insert(nptr* head, int data, int index){
    int size = 0;
    int i;
    NODE* end = *head;
    NODE* new = (NODE*)malloc(sizeof(NODE));
    new->data = data;
    new->link = NULL;
  
    if(*head == NULL) size = 0;
    else{
        while(1){
            size++;
            if(end->link == NULL) break;
            else end = end->link;
        }
    }
    
    end = *head;
    i = 0;
    if(index == 0){
        new->link = *head;
        *head = new;
    }
    else if(index == -1 || index >= size){
        while(1){
            if(end->link == NULL){
                end->link = new;
                break;
            }
            end = end->link;
        }
    }
    else if(index >0 && index <size){
        for(i = 0; i<index-1; i++){
            end = end->link;
        }
        new->link = end->link;
        end->link = new;
    }
 
    PrintAll(*head);
    return;
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
}
