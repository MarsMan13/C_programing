#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct member_info{
    
    int number;
    char id[50];
    char pw[50];
    char name[50];
    char address[200];

}member_info;


int login(member_info *member_infos, int i, char idd[50], char pww[50]);


int main(void){
    
    char temp[200];
    
    FILE *p = fopen("customer.csv", "r");
    
    member_info *member_infos;
    
    int i = 1;
    int j;
    int judge = 0;

    char idd[50];
    char pww[50];

    //
    member_infos = (member_info *)calloc(1, sizeof(member_info));
    

    while(1){
        if(fgets(temp, 200, p) == NULL) break;
        else
        {

            member_infos = (member_info *)realloc(member_infos, (++i)*sizeof(member_info));
        
            member_infos[i-2].number = atoi(strtok(temp, ","));
            strcpy(member_infos[i-2].id, strtok(NULL, ","));
            strcpy(member_infos[i-2].pw, strtok(NULL, ","));
            strcpy(member_infos[i-2].name, strtok(NULL, ","));
            strcpy(member_infos[i-2].address, strtok(NULL, ","));
        }
    }
    fclose(p);
   

    printf("로그인 프로그램\n");
    
    printf("아이디: ");
    scanf("%s", idd);
    printf("비밀번호: ");
    scanf("%s", pww);
    
    judge =0 ;
    judge+=login(member_infos, i, idd, pww);
    while(judge >= 0 && judge != 3){ 
        printf("아이디: ");
        scanf("%s", idd);
        printf("비밀번호: ");
        scanf("%s", pww);
        judge+=login(member_infos, i, idd, pww);
        
    }
   

    return 0;
}


int login(member_info *member_infos, int i, char idd[50], char pww[50]){
    
    int j;

    for(j = 0; j<i-1; j++){
        if(strcmp(member_infos[j].id, idd) == 0){           
            if(strcmp(member_infos[j].pw, pww) == 0){
                
                printf("===================\n");
                printf("회원번호: %d\n", member_infos[j].number);
                printf("아이디: %s\n", member_infos[j].id);
                printf("비밀번호: %s\n", member_infos[j].pw);
                printf("이름: %s\n", member_infos[j].name);
                printf("주소: ");
                fputs(member_infos[j].address, stdout);
                return -10;
            }
        }
    }
    printf("일치하는 회원이 없습니다.\n");
    return 1;
}
