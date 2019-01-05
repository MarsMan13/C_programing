#include <stdio.h>

typedef struct{
    
    int xpos;
    int ypos;


}point;

typedef struct{

    double radius;
    point *center;

}circle;


int main(void){

    point cen = {2, 3};
    double rad = 5.5;

    circle ring = {rad, &cen};

    printf("radius : %g \n", ring.radius);
    printf("center : (%d, %d) \n", (ring.center)->xpos, (ring.center)->ypos);

    return 0;
}
