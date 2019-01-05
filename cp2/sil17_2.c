#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    
    double x;
    double y;
    double z;
    double r;

}SPHERE;

double Distance(SPHERE, SPHERE);
double CrossSectionArea(SPHERE, SPHERE);
double SurfaceArea(SPHERE, SPHERE);
double Volume(SPHERE, SPHERE);



int main(void){
    
    SPHERE s1, s2;
    double dis = 0;

    printf("Type First Sphere Coordinate : ");
    scanf("%lf %lf %lf", &(s1.x), &(s1.y), &(s1.z));
    printf("Type First Sphere Radius : ");
    scanf("%lf", &(s1.r));
    printf("Type Second Sphere Coordinate : ");
    scanf("%lf %lf %lf", &(s2.x), &(s2.y), &(s2.z));
    printf("Type Second Sphere Radius : ");
    scanf("%lf", &(s2.r));

    dis = Distance(s1, s2);
    
    if(dis > (s1.r + s2.r)){
        printf("Sum of Cross Section Area : %.2f\n", CrossSectionArea(s1, s2));
    }
    else if(dis == (s1.r + s2.r)){
        printf("Sum of Surface Area : %.2f\n", SurfaceArea(s1, s2));
    }
    else if(dis < (s1.r + s2.r)){
        printf("Sum of Volume : %.2f\n", Volume(s1, s2));
    }

    return 0;
}

double Distance(SPHERE s1, SPHERE s2){
    
    return (sqrt(pow((s1.x - s2.x), 2) + pow((s1.y -  s2.y), 2) + pow((s1.z- s2.z), 2)));

}

double CrossSectionArea(SPHERE s1, SPHERE s2){

    return ( 3.14 * pow((s1.r), 2) + 3.14 * pow((s2.r), 2));
}

double SurfaceArea(SPHERE s1, SPHERE s2){

    return (4*3.14 * pow((s1.r),2) + 4*3.14 * pow((s2.r), 2));
}

double Volume(SPHERE s1, SPHERE s2){

    return ( (3.14 * pow((s1.r), 3) * 4 / 3)  + (3.14 * pow((s2.r), 3)*4/3));
}


