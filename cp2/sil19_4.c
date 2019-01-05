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
void PrintList();


//MMMMMMMMMMMMMMMMMAAAAAAAAAAAAAAAIIIIIIIIIIIIIIIIIINNNNNNNNNNNNNNN

int main(void){
    
    InsertNodeAtFront('p');   
    InsertNodeAtFront('p');   
    InsertNodeAtFront('a');   
    InsertNodeAtBack('l');   
    InsertNodeAtBack('e');   
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
