#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _NODE{
    char data;
    struct _NODE *link;

}NODE;

NODE *head = NULL;

void InsertNodeAtFront(char);
void InsertNodeAtBack(char);
void PrintList(void);


int main(void){
   

    InsertNodeAtFront('p');
    InsertNodeAtFront('p');
    InsertNodeAtFront('a');
    InsertNodeAtBack('l');
    InsertNodeAtBack('e');

    PrintList();

    return 0;
}

void InsertNodeAtFront(char c){
    NODE *new = (NODE*)malloc(sizeof(NODE));
    new->data = c;
    new->link = NULL;

    if(head == NULL){
        head = new;
    }
    else{
        new->link = head;
        head = new;
    }
}

void InsertNodeAtBack(char c){
    NODE *new = (NODE*)malloc(sizeof(NODE));
    NODE *end = head;
    new->data = c;
    new->link = NULL;

    if(head == NULL){
        head = new;
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

void PrintList(void){
    NODE *end = head;

    if(head == NULL) return;
    else{
        while(1){
            printf("%c", end->data);
            end = end->link;
            if(end == NULL) break;
        }
        printf("\n");
    }
}
