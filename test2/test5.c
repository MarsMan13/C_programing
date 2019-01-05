#include <stdio.h>

struct point{
    
    int x;
    int y;
    int z;
    int ary[10];
};

int main(void){
    
    struct point p = {1, 2, {3, 4, 5}};

    printf("%d %d %d %d\n", sizeof(p.x), sizeof(p.y), sizeof(p.z), sizeof(p.ary));

    printf("%d %d %d %d\n", p.x, p.y, p.z, p.ary[1]);

    return 0;
}
