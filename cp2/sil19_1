#include <stdio.h>
#include <stdlib.h>

typedef struct node* nptr;
typedef struct node{
    int data;
    nptr link;

}NODE;

void Insert(nptr*, int);
void PrintAll(nptr);

int main(void){

    int A[10] = {3, 9, 8, 2, 5, 10, 7, 1, 4, 6};   
    
    nptr head = (nptr)malloc(sizeof(nptr));
    nptr point = head;
    int n = 0;

    while(n<10){
        Insert(&point, A[n]);
        n++;
    }
    
    PrintAll(head->link);
    


    return 0;
}

void Insert(nptr *p, int n){

    (*p)->link = (nptr)malloc(sizeof(NODE));
    (*p) = (*p)->link;
    (*p)->data = n;
    (*p)->link = NULL;

    return;
}

void PrintAll(nptr t){
    
    int n = 0;
        
    while(t->link != NULL){
        printf("%d ", t->data);
        t = t->link;
    }
    printf("\n");
}
