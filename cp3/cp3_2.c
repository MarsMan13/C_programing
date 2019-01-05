#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _DICT{
    char data[51];
    struct _DICT *next;

}DICT;


void printList(DICT *list);
void makeList(DICT *list, char word[]);
void deleteList(DICT *list, int n);
void FreeAll(DICT **head);

int main(void){
    
    char command[51];
    DICT *head = (DICT*)malloc(sizeof(DICT));
    head->next = NULL;
    int num;

    while(1){
        printf("Input command : ");
        scanf("%s", command);
        if(strcmp(command, "print_dict") == 0){
            printList(head);
        }
        else if(strcmp(command, "exit") == 0){
            FreeAll(&head);
        }
        else if(command[0] >= '0' && command[0] <= '9'){
            num = atoi(command);
            deleteList(head, num);
        }
        else{
            makeList(head, command);

        }
    }

    return 0;
}

void printList(DICT *list){

    DICT *end1 = list->next;
    int i = 0;

    while(end1 != NULL){
        if(i != 0) printf(" -> ");
        printf("%s", end1->data);
        i++;
        end1= end1->next;
    }
    printf("\n");
    return;
}

void makeList(DICT *list, char word[]){
    
    DICT *new = (DICT*)malloc(sizeof(DICT));
    strcpy(new->data, word);
    new->next= NULL;
    DICT *end = list->next;
    DICT *end2;
    char temp[51];
    int i, j, k;
    int count;

    if(end == NULL){
        list->next = new;
        return;
    }
    else{
        while(end->next != NULL){
            end = end->next;
        }
        end->next = new;
    }

    end = list->next;
    count = 0;
    while(end!= NULL){
        end = end->next;
        count++;
    }

    if(count == 1) return;

    

    for(i = 0; i<count; i++){
        for(j = 0; j<count-i-1; j++){
            end2 = list->next;
            end = list->next;
            for(k = 0; k<j; k++){
                end = end->next;
                end2 = end2->next;
            }
            end2 = end2->next;
            if(strcmp(end->data , end2->data) > 0){
                strcpy(temp, end->data);
                strcpy(end->data, end2->data);
                strcpy(end2->data, temp);
            }
        }
    }


    
    return;
}

void deleteList(DICT *list, int n){
   
    DICT *end1 = list->next;
    DICT *end2 = list->next;
    int count = 0;
    int i, j;

    while(end1 != NULL){
        end1 = end1->next;
        count++;
    }

    if(n > count-1) return;


    end1= list->next;
    end2= list->next;
    
    if(n == 0){
        end1 =list->next;
        end2 =list->next->next;
        free(end1);
        list->next = end2;
        return;
    }

    for(i = 0; i<n-1; i++){
        end1 = end1->next;
    }
    
    end2 = end1->next;
    end1->next= end2->next;
    free(end2);


}

void FreeAll(DICT **head){
    DICT *end1 = (*head)->next;
    DICT *end2 = (*head)->next;

    while(end1 != NULL){
        end2 = end1;
        end1 = end1->next;
        free(end2);
    }
    free(*head);

}
