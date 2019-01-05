#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char data;
    struct node *link;

}NODE;

typedef struct node* nptr;
nptr head = NULL;
//
void InsertNodeAtFront(char a);
void InsertNodeAtBack(char b);
void DeleteNodeAtFront(void);
void DeleteNodeAtBack(void);

void PrintList();


//MMMMMMMMMMMMMMMMMAAAAAAAAAAAAAAAIIIIIIIIIIIIIIIIIINNNNNNNNNNNNNNN

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
    DeleteNodeAtFront();
    DeleteNodeAtBack();
    DeleteNodeAtBack();
    DeleteNodeAtBack();
    PrintList();

    return 0;
}

void InsertNodeAtFront(char a){
    
    nptr new = (NODE *)malloc(sizeof(NODE));
    new->data = a;
    new->link = NULL;

    if(head == NULL){
        head = (NODE *)malloc(sizeof(NODE));
        head->link = new;
    }
    else{
        new->link = head->link;
        head->link = new;
    }
}

void InsertNodeAtBack(char b){
    
    nptr new = (NODE *)malloc(sizeof(NODE));
    new->data = b;
    new->link = NULL;

    nptr end = NULL;

    if(head == NULL){
        head = (NODE *)malloc(sizeof(NODE));
        head->link = new;
    }
    else{
        end = head;
        while(end->link != NULL){
            end = end->link;
        }
        end->link = new;
    }
}

void PrintList(){

    nptr end = head;

    while(end->link != NULL){
        printf("%c", end->data);
        end = end->link;
    }
    printf("%c\n", end->data);
    
}

void DeleteNodeAtFront(void){
    
    if(head != NULL){
        nptr next = head->link;
        free(head);
        head = next;
    }
}

void DeleteNodeAtBack(void){
    
    nptr end1 = head;
    nptr end2 = head;

    if(head != NULL){

        while(end1->link->link != NULL){
            end1 = end1->link;
            end2 = end2->link;
        }
        end2 = end2->link;
        free(end2);
        end1->link = NULL;
    }
}





