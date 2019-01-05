#include <stdio.h>

struct point{
    int xpos, ypos;
};

struct circle{
    double radius;
    struct point *center;
};

int main(void){

    struct point cen={2, 7};
    double rad= 5.5;
    struct circle ring = {rad, &cen};

    printf("radius : %g\n", ring.radius);
    printf("center : [%d, %d]\n", (ring.center)->xpos, (ring.center)->ypos);


    return 0;
}
