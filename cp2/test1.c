#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int data;
    struct Node *link;
}NODE;


void insert(NODE **head, int n);

int searching_delete(NODE **head, int target);
void print_all(NODE *head);

int main(void){
    
    int i =0;
    int temp;
    NODE* head = NULL;

    for(i = 0; i<8; i++){
        scanf("%d", &temp);
        insert(&head, temp);
    }
    print_all(head); 

    for(i = 0; i<9; i++){
        scanf("%d", &temp);
        if(searching_delete(&head, temp) == 1){
            printf("There isn't %d\n", temp);   
        }
        print_all(head);
    }
}

int searching_delete(NODE **head, int target){
    
    NODE *end1 = *head;
    NODE *end2 = *head;

    if(*head == NULL){
        return 1;
    }
    else if(end1->link == NULL){
        if(end1->data == target){
            *head = end1->link;
            free(end1);
            return 0;
        }
        else return 1;
    }
    else{
        if(end1->data == target){
            *head = end1->link;
            free(end1);
            return 0;
        }
        while(1){
            end1 = end1->link;
            if(end1 == NULL) return 1;
            if(end1->data == target){
                end2->link = end1->link;
                free(end1);
                return 0;
            }
            end2 = end2->link;
        }
    }
    return 0;
}

void insert(NODE **head, int n){
    
    NODE *new = (NODE *)malloc(sizeof(NODE));
    new->data = n;
    new->link = NULL;
    NODE *end = *head;

    if(*head == NULL){
        *head = new;
    }
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

void print_all(NODE *head){
    NODE *end = head;

    if(head == NULL){
        return;
    }
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
