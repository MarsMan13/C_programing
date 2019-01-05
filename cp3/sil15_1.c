#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct __CUSTOMER__{
    int number;
    char id[50];
    char pw[50];
    char name[50];
    char address[200];
}customer;


int main(void){

    char idd[50];
    char pww[50];
    FILE *fp;
    char temp[401];
    int i, j;
    int count;

    customer *cus = malloc(sizeof(customer));

    fp = fopen("customer.csv", "r");
    i = 0 ;
    count = 0;
    while(1){
        if(fgets(temp, 400, fp) != NULL){
            cus = (customer*)realloc(cus, sizeof(customer) * (count+1));
            cus[count].number = atoi(strtok(temp, ","));
            strcpy(cus[count].id, strtok(NULL, ","));
            strcpy(cus[count].pw, strtok(NULL, ","));
            strcpy(cus[count].name, strtok(NULL, ","));
            strcpy(cus[count].address, strtok(NULL, ","));
        }
        else break;
        count++;
    }
    fclose(fp);

    printf("로그인 프로그램\n");
    
    while(1){
        if(j == 4){
            return 0;
        }
        else if(j == 5) return 0;

        printf("아이디: ");
        scanf("%s", idd);
        printf("비밀번호: ");
        scanf("%s", pww);

        printf("=================\n");
//////////
    
        for(i = 0; i<count ; i++){
            if(strcmp(idd, cus[i].id) ==  0){
                if(strcmp(pww, cus[i].pw) == 0){
                    printf("회원번호: %d\n", cus[i].number);
                    printf("아이디: %s\n", cus[i].id);
                    printf("비밀번호: %s\n", cus[i].pw);
                    printf("이름: %s\n", cus[i].name);
                    printf("주소: %s", cus[i].address);
                    j = 5;
                    break; 
                }
            }

        }
        if(j == 5)return 0;
        if(i == count)
            printf("일치하는 회원이 없습니다\n");
        j++;
    }
    return 0;
}
