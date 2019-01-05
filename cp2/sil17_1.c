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


//func
int search(employee_data *e, int num, int keyword);
employee_data update(employee_data e, int n);

//MMMMMMMMMMMMaiNNNNNNNNNNNNN

int main(void){
    
    FILE *p = fopen("input.csv", "r");
    int n;
    int i;
    int idd;
    char temp[201];
    char ch;
    int ret;

    employee_data* data;

    fgets(temp, 200, p);
    n = atoi(temp);
    
    data = (employee_data *)malloc(n * sizeof(employee_data));

    for(i = 0; i<n; i++){
        fgets(temp, 200, p);

        data[i].employee_id = atoi(strtok(temp, ","));
        strcpy(data[i].name, strtok(NULL, ","));
        data[i].gender = atoi(strtok(NULL, ","));
        strcpy(data[i].department.dept_name, strtok(NULL, ","));
        data[i].department.dept_no = atoi(strtok(NULL, ","));
        data[i].salary = atof(strtok(NULL, ","));
     
    }

    //
    do{
        printf("Employee ID : ");
        scanf("%d", &idd);
        printf("------Employee Data------\n");

        if((ret = search(data, n, idd)) < 0){
            printf("No employee\n");  
            
        }
        else{
            data[ret] = update(data[ret], n);
        }

        printf("Continue? (y/n) : ");
//        while(getchar() != '\n');
        ch = getchar();
        if(ch == 'n') return 0;
        else if(ch == 'y');

    }while(1);


    
    return 0;
}

int search(employee_data *e, int num, int keyword){
    
    int i;
    char ch = 0;

    for(i = 0; i<num; i++){
        if((e[i]).employee_id == keyword){
            printf("%d / ", e[i].employee_id);
            printf("%s / ", e[i].name);
            if(e[i].gender == 0) printf("Male / ");
            else if(e[i].gender == 1) printf("Female / ");
            printf("%s / ", e[i].department.dept_name);
            printf("%d / ", e[i].department.dept_no);
            printf("%.2f\n", e[i].salary);
            return i;
        }

    }
    return -1;

} 

employee_data update(employee_data e, int n){

    int dep_n = 0;

    printf("------Update Information------\n");

    printf("Input the department Number : ");
    scanf("%d", &dep_n);

    switch(dep_n){
        case 1 :
            strcpy(e.department.dept_name, "FINANCE");
            e.department.dept_no = 1;
            break;
        case 2 :
            strcpy(e.department.dept_name, "SALES");
            e.department.dept_no = 2;
            break;
        case 3 :
            strcpy(e.department.dept_name, "RESEARCH");
            e.department.dept_no = 3;
            break;
        case 4 :
            strcpy(e.department.dept_name, "PLANNING");
            e.department.dept_no = 4;
            break;
    }
    
    //
    printf("------Updated employee data------\n");
    
    printf("%d / ", e.employee_id);
    printf("%s / ", e.name);
    if(e.gender == 0) printf("Male / ");
    else if(e.gender == 1) printf("Female / ");
    printf("%s / ", e.department.dept_name);
    printf("%d / ", e.department.dept_no);
    printf("%.2f\n", e.salary); 

    return e;
}
