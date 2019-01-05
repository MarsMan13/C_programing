#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char dept_name[25];
    int dept_no;
}dept;

enum Gender{
    Male = 0,
    Female
};

typedef struct{
    int employee_id;
    char name[25];
    enum Gender gender;
    dept department;
    double salary;

}employee_data;

int search(employee_data *e, int num, int keyword);
employee_data update(employee_data e, int n);

int main(void){
    
    FILE *fp = fopen("input.csv", "r");
    int n;
    int i;
    int idd;
    int ret;
    int dept_n;
    char temp[501];
    char sel;
    employee_data *e;

    fgets(temp, 500, fp);
    n = atoi(temp);
    printf("%d\n", n);
    e = (employee_data *)malloc(sizeof(employee_data) * n);

    for(i = 0; i<n; i++){
        fgets(temp, 500, fp);
        e[i].employee_id = atoi(strtok(temp, ","));
        strcpy(e[i].name, strtok(NULL, ","));
        e[i].gender = (enum Gender)strtok(NULL, ",");
        strcpy(e[i].department.dept_name, strtok(NULL, ","));
        e[i].department.dept_no = atoi(strtok(NULL, ","));
        e[i].salary = atof(strtok(NULL, ","));
    }

    printf("54\n");
    /////

    while(1){
        printf("Employee ID : ");
        scanf("%d", &idd);
        ret = search(e, n, idd);
        if(ret == -1) printf("No employee\n");
        else{
            printf("------Employee Data------\n");
            printf("%d /", e[ret].employee_id);
            printf("%s /", e[ret].name);
            if(e[ret].gender == 0)
                printf("%s /", "Male");
            else
                printf("%s /", "Female");
            printf("%s /", e[ret].department.dept_name);
            printf("%d /", e[ret].department.dept_no);
            printf("%f\n", e[ret].salary);
            
            printf("------Update Information------\n");
            printf("Input the department Number: ");
            scanf("%d", &dept_n);
            e[ret] = update(e[ret], dept_n);
            
            printf("------Updated employee data------\n");
            printf("%d /", e[ret].employee_id);
            printf("%s /", e[ret].name);
            if(e[ret].gender == 0)
                printf("%s /", "Male");
            else
                printf("%s /", "Female");
            printf("%s /", e[ret].department.dept_name);
            printf("%d /", e[ret].department.dept_no);
            printf("%f\n", e[ret].salary);
        }
        while(getchar() != '\n');
        printf("Continue? (y/n) : ");
        scanf("%c", &sel);
        if(sel == 'n') return 0;
        else if(sel == 'y') continue;
    }
    

    return 0;
}

int search(employee_data *e, int num, int keyword){
    int i;
    for(i = 0; i<num; i++){
        if(e[i].employee_id == keyword) return i;

    }
    return -1;
}

employee_data update(employee_data e, int n){
    switch(n){
        case 1:
            e.department.dept_no = n;
            strcpy(e.department.dept_name, "FINANCE");
            break;
        case 2:
            e.department.dept_no = n;
            strcpy(e.department.dept_name, "SALES");
            break;
        case 3:
            e.department.dept_no = n;
            strcpy(e.department.dept_name, "RESEARCH");
            break; 
        case 4:
            e.department.dept_no = n;
            strcpy(e.department.dept_name, "PLANNING");
            break; 
    }

    return e;
}
