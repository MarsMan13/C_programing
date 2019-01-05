#include <stdio.h>

struct student{

    int id;
    char name[26];
    double gradePoints;
};
struct student stu1 = {1, "Jen", 97.3};

void def(void){
    
    stu1.id = 2;

}


int main(void){

    printf("%d\n", stu1.id);

    def();


    printf("%d\n", stu1.id);

    return 0;
}
