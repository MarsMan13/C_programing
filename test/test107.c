#include <stdio.h>
//#include <std>

struct person{
    char name[20];
    char phonenum[20];
    int age;

};


int main(void){

    struct person ary[3] = {
        {"Jason", "1234-5678", 16},
        {"Tom", "8765-4321", 41},
        {"Ryle", "4567-7654", 32},
    };
    int i;
    
    for(i = 0; i<3; i++)
        printf("%-20s %-20s %d\n", 
                ary[i].name, ary[i].phonenum, ary[i].age);
    



    return 0;
}
