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

    struct point pos = {10, 20};
    struct person man = {"Jason", "010-9311-0513", 16};

    printf("%p %p\n", &pos, &pos.ypos);
    printf("%p %p\n", &man, man.phonenum);


    return 0;
}
