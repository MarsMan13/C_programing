#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{

    int n;
    struct NODE *link;

}Node;

Node *insertion(Node *);
void printing(Node *head, int n);

int main(void){
    
    Node *head = (Node *)malloc(sizeof(Node));
    Node *pre = head;
    int count = 0;

    while(count<10){
        count++;
        pre = insertion(pre);       
    }
   
    printf("====================\n");

    printing(head, count);
    
    return 0;
}

Node *insertion(Node *p){
    
    p->link = (Node *)malloc(sizeof(Node));
    p = p->link;
    scanf("%d", &(p->n));
    p->link = NULL;

    return p;
}

void printing(Node *head, int n){
    
    int i;
    Node *p = head;
    
    p = p->link;   
    for(i = 0; i<n; i++){
        printf("%d\n", p->n);
        p = p->link;
    }


}
