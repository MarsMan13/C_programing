#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node* nptr;

typedef struct node{
    int st_id;
    char *st_name;
    nptr link;
}Node;

Node*head=NULL;


void create_Node(int id, char *name);
void print_all(void);

int main(void){

    FILE *fp = fopen("input2.csv", "r");
    char str[101];
    int id;
    char *name;

    while(1){
        if(fgets(str, 100, fp) == NULL) break;
        else{
            id = atoi(strtok(str, ","));
            name = strtok(NULL, ",");
            create_Node(id, name);
        }
    }
    
    fclose(fp);
    print_all();

    return 0;
}

void create_Node(int id, char *name){
    Node*new = (Node*)malloc(sizeof(Node));
    new->st_id = id;
    new->st_name = name;
    
    Node*end = head;

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

void print_all(void){
    Node*end = head;
    
    if(end == NULL){
        printf("64\n");
        return;
    }
    else{
        while(1){
            printf("%d / %s", (end->st_id), (end->st_name));
            end = end->link;
            if(end == NULL) break;
        }
    }
}
