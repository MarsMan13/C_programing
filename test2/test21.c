#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
    
    int num;
    struct NODE *LINK;

}Node;

void printing(Node *, int n);

int main(void){

    Node *head = (Node *)malloc(sizeof(Node));
    head->num= 3;
    head->LINK = (Node *)malloc(sizeof(Node));
    head->LINK->num = 4;
    head->LINK->LINK = NULL;

    printing(head, 2);



    return 0;
}

void printing(Node *head, int n){

    int i;
    Node *p = head;

    for(i = 0; i<n; i++){
        printf("%d\n", p->num);
        p = p->LINK;

    }

}
