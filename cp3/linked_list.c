#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int data;
    struct node *link;
}NODE;

void FreeAll(NODE *head);
void Insert(NODE **head, int n, int index);
void Delete(NODE **head, int index);
void PrintAll(NODE *head);


int main(void){
    
    int sel;
    int n;
    int index;

    NODE *head = NULL;

    printf("---------Menu---------\n");
    printf(" 0 : Quit             \n");
    printf(" 1 : Insert           \n");
    printf(" 2 : Delete           \n");
    printf("----------------------\n");

    while(1){
        printf("Enter the key: ");
        scanf("%d", &sel);
        switch(sel){
            case 0 :
                FreeAll(head);
                return 0;
            case 1 :
                printf(">>> Enter the \"n\" and \"index\" : ");
                scanf("%d %d", &n, &index);
                Insert(&head, n, index);
                break;
            case 2 :
                printf(">>> Enter the deleted \"index\" : ");
                scanf("%d", &index);
                Delete(&head, index);
                break;
        }
        PrintAll(head);
    }
    

    return 0;
}


void FreeAll(NODE *head){
    NODE *end = head;

    while(end != NULL){
        printf("%d ", end->data);
        end = end->link;
    }
    printf("\n");
}

void Insert(NODE **head, int n, int index){
    
    int count = 0;
    int i;
    NODE *end = *head;
    NODE *new = (NODE*)malloc(sizeof(NODE));
    new->data = n;
    new->link = NULL;

    while(end != NULL){
        count++;
        end = end->link;
    }
    //

    end = *head;
    printf("count : %d\n", count);
    printf("index : %d\n", index);
    if(index == 0){
        printf("index: 0\n");
        new->link = *head;
        *head = new;
    }
    else if(index>0 && index<count){
        printf("index: 1\n");
        for(i = 0; i<(index-1); i++){
            end = end->link;
        }    
        new->link = end->link;
        end->link = new;
    } 
    else if(index >= count){
        printf("index: 2\n");
        while(end->link != NULL){
            end = end->link;
            printf("check\n");
        }
        printf("check\n");
        end->link = new;
        printf("LaCcheck\n");
    }

    return;

}

void Delete(NODE **head, int index){
    int count = 0;
    int i;
    NODE *end = *head;
    NODE *end2 = *head;

    while(end != NULL){
        count++;
        end = end->link;
    }
    //
    end = *head;
    end2 = *head;
    if(count == 0) return;
    if(index == 0){
        end = *head;
        (*head) = (*head)->link;
        free(end);
    }
    else if(index>0 && index < count){
        for(i = 0; i<(index-1); i++){
            end = end->link;
        }
        end2 = end->link;
        end->link = end2->link;
        free(end2);
    }
    return;

}

void PrintAll(NODE *head){
    NODE *end = head;
    
    while(end != NULL){
        printf("| %d ", end->data);
        end = end->link;
    }
    printf("|\n");
}

