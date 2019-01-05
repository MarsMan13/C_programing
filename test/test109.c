#include <stdio.h>
struct point{
    int xpos, ypos;
};

int main(void){

    struct point pos = {11,12};
    struct point *pptr = &pos;

    printf("%d %d\n", pos.xpos, pos.ypos);

    (*pptr).xpos = 111;
    (*pptr).ypos = 222;


    printf("%d %d\n", pos.xpos, pos.ypos);
    

    return 0;
}
