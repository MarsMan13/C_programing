#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Node{
    
    int str_id;
    char *st_name;
    struct _Node *link;

}Node;

Node *head = NULL;

void create_Node(int id, char *name);

int main(void){
    
    Node *p;
    int n;
    int id;
    int i;
    char temp[100];
    char name[51];
    FILE *fp = fopen("input2.csv", "r");
    fscanf(fp, "%d", &n);
    fgets(temp, 99, fp);

    for(i = 0; i<n; i++){
        fgets(temp, 99, fp);
        
        id = atoi(strtok(temp, ","));
        strcpy(name, strtok(NULL, ","));
        printf("%d %s\n", id, name);
        create_Node(id, name);
    }
    printf("!!!!!!!!!\n\n");
    p = head;
    for(i = 0; i<n; i++){
        p = p->link;
        printf("%d / %s", p->str_id, p->st_name);
    }


    return 0;
}

void create_Node(int id, char *name){
    
    Node *new;
    Node *p = head;

    //
    new = (Node *)malloc(sizeof(Node));
    new->st_name = (char *)malloc(sizeof(char) * 30);
    
    new->str_id = id;
    printf("%s\n", name);
    strcpy(new->st_name, name);
    new->link = NULL;
    //

    if(head == NULL){
        head = (Node *)malloc(sizeof(Node));
        head->link = new;
    }
    else{
        while(1){
            if(p->link != NULL){
                p = p->link;   
                continue;
            }   
            else{
                p->link = new;
                break;
            }
        }
    }


    return;
}
