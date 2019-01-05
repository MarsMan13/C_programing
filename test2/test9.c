#include <stdio.h>

typedef struct point{

    int xpos;
    int ypos;

}Point;

Point AddPoint(Point pos1, Point pos2){

    Point ret = {pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos};
    return ret;
}


int main(void){
    
    Point pos1 = {5, 6};
    struct point pos2 = {2, 9};

    Point result;

    printf("(%d, %d)\n(%d, %d)\n\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

    result = AddPoint(pos1, pos2);
    printf("(%d, %d)\n", result.xpos, result.ypos);

    return 0;
}
