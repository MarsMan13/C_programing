#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;

}NODE;

typedef NODE* nptr;

void Insert(nptr *head, int data, int index);
void Sort(nptr *head);
void PrintAll(nptr head);


int main(void){
    
    int A[10] = {3, 9, 8, 2, 5, 10, 7, 1, 4, 6};
    nptr head = NULL;

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

    Sort(&head);

    PrintAll(head);

    return 0;
}

void Insert(nptr *head, int data, int index){
    
    int size = 0;
    
    NODE *end = (*head);
    
    NODE *new = (NODE *)malloc(sizeof(NODE));
    new->link = NULL;
    new->data = data;

    if((*head) != NULL){
        while(end->link != NULL){
            end = end->link;
            size++;
        }
    }
    else{
        (*head) = new;
        PrintAll(*head);
        return;
    }
    

    if((index < 0) || (index > size)){
        while(end->link != NULL){
            end = end->link;
        }
        end->link = new;
    }
    else if(index == 0){
        new->link = (*head);
        (*head) = new;
    }
    else{
        size = 1;
        end = (*head);
        while(size < index){
            end = end->link;
            size++;
        }
        new->link = end->link;
        end ->link = new;
    }


    PrintAll(*head);

}

void Sort(nptr *head){
    /*
    
    int i, j;

    for(i = 0; i<n; i++){
        for(j = 0; j<n-i-1; j++){
            if(ary[j] > ary[j+1])
                reverse(ary[j], ary[j+1]);
        }
    }
    */

    int size = 0;
    nptr end = (*head);

    if((*head) != NULL){
        while(end->link != NULL){
            end = end->link;
            size++;
        }
    }


    nptr p1 = (*head);
    int temp;
    int i;
    
    printf("%d\n", size);

    for(i = 0; i<size; i++){
        p1 = (*head);
        while(p1->link != NULL){
            if( (p1->data) > (p1->link->data) ){
                temp = p1->data;
                p1->data = p1->link->data;
                p1->link->data = temp;
            }
            p1 = p1->link;
        }
    }
    
}

void PrintAll(nptr head){

    nptr end = head;

    while(end->link != NULL){
        printf("%d ", end->data);
        end = end->link;
    }
    printf("%d\n", end->data);

}
