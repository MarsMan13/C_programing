#include <stdio.h>
#include <string.h>
#include <math.h>
struct point;

int main(void){

    struct point pos1, pos2;
    double distance;

    fputs("point1 pos: ", stdout);
    scanf("%d %d", &pos1.xpos, &pos1.ypos);

    fputs("point2 pos: ", stdout);
    scanf("%d %d", &pos2.xpos, &pos2.ypos);

    distance = sqrt(pow((double)(pos1.xpos - pos2.xpos), 2) +
            pow((double)(pos1.ypos - pos2.ypos), 2));

    printf("The distance between pos1 and pos2 is %lf\n", distance);

    return 0;
}

struct point{
    
    int xpos;
    int ypos;

};


