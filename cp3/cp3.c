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
void FreeAll(DICT **head);//

int main(void){
    
    char command[51];
    int n;
    DICT *head = (DICT *)malloc(sizeof(DICT));
    (head->data)[0] = 0;

    while(1){
        printf("Input command : ");
        scanf("%s", command);
        if(strcmp(command, "exit") == 0){
            FreeAll(&head);
            return 0;
        }
        else if(strcmp(command, "print_dict") == 0){
            printList(head);
        }
        else if('0' <= command[0] && command[0] <= '9'){
            n = atoi(command);
            deleteList(head, n);
        }
        else{
            makeList(head, command);
        }
    }


    return 0;
}

void printList(DICT *list){
    DICT *end = list;
    int i = 0;

    while(end != NULL){
        if(i != 0) printf(" -> ");
        printf("%s", end->data);
        i++;
        end = end->next;
    }
    printf("\n");

}

void makeList(DICT *list, char word[]){
    
    DICT *new = (DICT *)malloc(sizeof(DICT));
    strcpy(new->data, word);
    new->next = NULL;
    
    DICT *end = list;
    DICT *end1, *end2;
    int count = 0;
    int i, j, k;
    char temp[51];

    if((end->data)[0] == 0){
        strcpy(list->data, word);
        return;
    }
    else{
        printf("78\n");
        while(end->next != NULL){
            end = end->next;
            count++;
        }
        end->next = new;
        count++;
    }

    printf("check 86\n");
    

    end = list;
    if(end->next != NULL){
        for(i = 0; i<count; i++){
            for(j = 0; j<count-i; j++){
                end1 = list; end2 = list;
                for(k = 0; k<j; k++){
                    end1 = end1->next;
                    end2 = end2->next;
                }
                end2 = end2->next;
                
                if(strcmp(end1->data, end2->data) > 0){
                    strcpy(temp, end1->data);
                    strcpy(end1->data, end2->data);
                    strcpy(end2->data, temp);
                }
            }
        }
    }


}

void deleteList(DICT *list, int n){
    
    DICT *end = list;
    DICT *end2 = list;
    int count = 0;
    int i;

    while(end != NULL){
        end = end->next;
        count++;
    }

    end = list;
    if(count-1 < n) return;

    if(n == 0){
        while(end2->next->next != NULL){
            end2 = end2->next;
        }
        strcpy(list->data, end2->next->data);
        free(end2->next);
        end2->next = NULL;
        return;
    }

    for(i = 0; i<n-1; i++){
        end = end->next;
    }
    end2 = end->next;
    end->next = end2->next;
    free(end2);
    
    return;
}

void FreeAll(DICT **head){
    DICT *end1 = *head;
    DICT *end2 = *head;

    while(end1 != NULL){
        end2 = end1;
        end1 = end1->next;
        free(end2);
    }
}
