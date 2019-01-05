#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    char data;
    struct node *link;
}NODE;

typedef struct node* nptr;
nptr head = NULL;

void InsertNodeAtFront(char a);
void InsertNodeAtBack(char b);
void DeleteNodeAtFront(void);
void DeleteNodeAtBack(void);

void PrintList();


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
    PrintList();

    return 0;
}

void InsertNodeAtFront(char a){
    
    nptr new = (NODE *)malloc(sizeof(NODE));
    new->data = a;
    new->link = NULL;

    if(head == NULL){
        head = new;
    }
    else{
        new->link = head;
        head = new;
    }

}

void InsertNodeAtBack(char b){
    
    nptr new = (NODE *)malloc(sizeof(NODE));
    new->data = b;
    new->link = NULL;
    
    nptr end = head;

    if(head == NULL){
        head = new;
    }
    else{
        while(end->link != NULL){
            end = end->link;
        }
        end->link = new;
    }
}

void DeleteNodeAtFront(void){
    
    nptr p = head->link;
    free(head);
    head = p;
}

void DeleteNodeAtBack(void){

    nptr end1 = head;

    if(head != NULL){
        while(end1->link->link != NULL){
            end1 = end1->link;
        }
                free(end1->link);
        end1->link = NULL;


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


