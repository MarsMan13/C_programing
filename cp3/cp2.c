#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _Person_Info{
    char name[51];
    char surname[21];
    char birth[7];
    struct _Person_Info *next;

}Person_Info;

enum SEARCH{
    NAME = 0,
    SURNAME,
    BIRTHDAY
};

Person_Info* person = NULL;

void makeList(char name[], char surname[], char birth[]);
void searchList(char *str, enum SEARCH option);
void FreeAll(void);

int main(void){

    int option;
    FILE *fp = fopen("input.txt", "r");
    char temp[100];
    char name[51];
    char surname[21];
    char birth[7];
    char str[51];
    int num;
    int i;

    fgets(temp, 99, fp);
    num = atoi(temp);
    for(i = 0; i<num; i++){
        fgets(temp, 99, fp);
        strcpy(name, strtok(temp, " "));
        strcpy(surname, strtok(NULL, " "));
        strcpy(birth, strtok(NULL, " "));
        makeList(name, surname, birth);
    }
    fclose(fp);
    //
    while(1){
        printf("Input Option : ");
        scanf("%d", &option);
        if(option == 0){
            printf("Good Bye!\n");
            FreeAll();
            return 0;
        }
        printf("Input String : ");
        scanf("%s", str);

        if(option == 1 || option == 2 || option == 3){
            searchList(str, (enum SEARCH)(option-1));
        }
    }



    return 0;
}

void makeList(char name[], char surname[], char birth[]){
    int len = strlen(birth);
    Person_Info *new = (Person_Info *)malloc(sizeof(Person_Info));
    strcpy(new->name, name);
    strcpy(new->surname, surname);
    birth[len-1] = '\0';
    strcpy(new->birth, birth);
    new->next = NULL;

    Person_Info *end;

    end = person;
    if(person == NULL){
        person = new;
    }
    else{
        while(end->next != NULL){
            end = end->next;
        }
        end->next = new;
    }
}

void searchList(char *str, enum SEARCH option){

    Person_Info *end = person;
    int year;

    if(end == NULL) {
        return;
    }

    end = person;
    switch(option){
        case NAME: 
            while(end != NULL){
                if(strcmp(str, end->name) == 0){
                    year = 1900 + ((int)(end->birth)[0] - '0')*10 + ((int)(end->birth)[1] - '0');
                    printf("We found %s %s born in %d.\n", end->name, end->surname, year);
                }
                end = end->next;
            }
            break;
        case SURNAME:
            while(end != NULL){
                if(strcmp(str, end->surname) == 0){
                    year = 1900 + ((int)(end->birth)[0] - '0')*10 + ((int)(end->birth)[1] - '0');
                    printf("We found %s %s born in %d.\n", end->name, end->surname, year);
                }
                end = end->next;
            }
            break;
        case BIRTHDAY:
            while(end != NULL){
                year = 1900 + ((int)(end->birth)[0] - '0')*10 + ((int)(end->birth)[1] - '0');
                if(year == atoi(str)){
                    printf("We found %s %s born in %d.\n", end->name, end->surname, year);
                }
                end = end->next;
            }
            break;
    }
    return;
}

void FreeAll(void){

    Person_Info *end1 = person;  
    Person_Info *end2 = person;  

    if(end1) return;

    while(end2 != NULL){
        end1 = end1->next;
        free(end2);
        end2 = end1;
    }

    return;
}
