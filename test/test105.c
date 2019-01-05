#include <stdio.h>

struct point{

    int xpos, ypos;
};

struct person{

    char name[20];
    char phonenum[20];
    int age;

};

int main(void){

    struct point pos1 = {1,1};
    struct person man = {
        {'J', 'a', 's', 'o', 'n', '\0'}
        , "010-1234-5678", 16};
    
    printf("%d %d\n", pos1.xpos, pos1.ypos);
    printf("%s %s %d\n", man.name, man.phonenum, man.age);

    return 0;
}
