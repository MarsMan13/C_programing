#include <stdio.h>
#include <string.h>


int main(void){
    
    char str[100] = "Gun Martthias Choi: cds06126/ 20/ A";
    char str2[100];
    char name[50];
    char id[50];
    int age = 0;
    char grade;
    int n1, n2;

    n1 = sscanf(str, "%50[^:] %*c %50[^/] %*c %d %*c%*c %c", name, id, &age, &grade);

    printf("Name : %s\n", name);
    printf("Id   : %s\n", id);
    printf("Age  : %d\n", age);
    printf("Grade: %c\n", grade);

    n2 = sprintf(str2, "[%s] : %s/ %d/ %c", name, id, age, grade);
    printf("%s\n", str2);

    return 0;
}
