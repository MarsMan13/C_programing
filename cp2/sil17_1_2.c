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
    char ch = 0;
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


    fclose(p);
    
    //
    do{
        printf("Employee ID : ");
        scanf("%d", &idd);
        printf("------Employee Data------\n");

        if((ret = search(data, n, idd)) < 0){
            printf("No employee\n");  
            
        }
        else{
            printf("%d / ", data[ret].employee_id);
            printf("%s / ", data[ret].name);
            if(data[ret].gender == 0) printf("Male / ");
            else if(data[ret].gender == 1) printf("Female / ");
            printf("%s / ", data[ret].department.dept_name);
            printf("%d / ", data[ret].department.dept_no);
            printf("%.2f\n", data[ret].salary);
            
            //
            printf("------Update Information------\n");
            printf("Input the department Number : ");

            data[ret] = update(data[ret], n);
            printf("------Updated employee data------\n");
    
            printf("%d / ", data[ret].employee_id);
            printf("%s / ", data[ret].name);
            if(data[ret].gender == 0) printf("Male / ");
            else if(data[ret].gender == 1) printf("Female / ");
            printf("%s / ", data[ret].department.dept_name);
            printf("%d / ", data[ret].department.dept_no);
            printf("%.2f\n", data[ret].salary); 


            //

        }

        printf("Continue? (y/n) : ");
        
//        while(getchar() != '\n');

        scanf("%c", &ch);
        
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
            return i;
        }

    }
    return -1;

} 

employee_data update(employee_data e, int n){

    int dep_n = 0;

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
   return e;
}
