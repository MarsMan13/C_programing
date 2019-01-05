#include <stdio.h>

struct point{
    int xpos;
    int ypos;
};


int main(void){

    struct point ary[3];
    int i;

    for(i = 0; i<3; i++){
        fputs("Enter the point_position : ", stdout);
        scanf("%d %d", &ary[i].xpos, &ary[i].ypos);

    }
    
    for(i = 0; i<3; i++){
        printf("[%d, %d]", ary[i].xpos, ary[i].ypos);
    }
    printf("\n");


    return 0;
}
