#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node* nptr;
typedef struct node{
    char data;
    nptr link;
}NODE;

nptr head = NULL;

void InsertNodeAtFront(char c);
void InsertNodeAtBack(char c);
void DeleteNodeAtFront(void);
void DeleteNodeAtBack(void);
void PrintList(void);

int main(void){

    InsertNodeAtFront('n');
    InsertNodeAtFront('e');
    InsertNodeAtFront('p');
    InsertNodeAtBack('l');
    InsertNodeAtFront('o');
    InsertNodeAtBack('a');
    InsertNodeAtBack('b');
    PrintList();
    
    DeleteNodeAtFront();
    DeleteNodeAtBack();
    DeleteNodeAtBack();
    DeleteNodeAtBack();
    
    PrintList();


    return 0;
}

void InsertNodeAtFront(char c){
    NODE *new = (NODE*)malloc(sizeof(NODE));
    new->data = c;
    new->link = NULL;

    if(head == NULL) head = new;
    else{
        new->link = head;
        head = new;
    }

}

void InsertNodeAtBack(char c){
    NODE *end = head;
    NODE *new = (NODE*)malloc(sizeof(NODE));
    new->data = c;
    new->link = NULL;

    if(head == NULL) head = new;
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

void DeleteNodeAtFront(void){
    NODE *end = head;

    if(head == NULL) return;
    else{
        head = head->link;
        free(end);
    }
}

void DeleteNodeAtBack(void){
    NODE *end = head;
    NODE *end2 = head;

    if(head == NULL) return;
    else if(head->link == NULL) free(head);
    else{
        while(1){
            if(end->link->link == NULL){
                end2 =end2->link;
                end->link = NULL;
                free(end2);
                break;
            }
            end = end->link;
            end2 = end2->link;
        }
    }
}


void DeleteNodeAtBack(void){

    NODE *end = head;

    if(head == NULL) return;
    else{
        while(1){
               
        }
    
    }

}


void PrintList(void){

    NODE *end = head;

    if(head == NULL) return;
    else{
        while(1){
            printf("%c", end->data);
            if(end->link == NULL) break;
            end = end->link;
        }
        printf("\n");
    }
}
