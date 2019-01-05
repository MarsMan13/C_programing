#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct sphere{
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
    
    SPHERE a1, a2;
    int dis;

    printf("Type First Sphere Coordinate : ");
    scanf("%lf %lf %lf", &(a1.x), &(a1.y), &(a1.z));
    printf("Type First Radius : ");
    scanf("%lf", &(a1.r));

    printf("Type Second Sphere Coordinate : ");
    scanf("%lf %lf %lf", &(a2.x), &(a2.y), &(a2.z));
    printf("Type Second Radius : ");
    scanf("%lf", &(a2.r));

    dis = Distance(a1, a2);
    if((a1.r + a2.r) < dis){
        printf("%.2f\n", CrossSectionArea(a1, a2));
    }
    else if(a1.r + a2.r == dis){
        printf("%.2f\n", SurfaceArea(a1, a2));
    }
    else{
        printf("%.2f\n", Volume(a1, a2));
    }

    return 0;
}

double Distance(SPHERE a1, SPHERE a2){
    
    return sqrt(pow(a1.x - a2.x, 2) + pow(a1.y - a2.y, 2) + pow(a1.z - a2.z, 2));
}

double CrossSectionArea(SPHERE a1, SPHERE a2){

    return (3.14*pow(a1.r, 2) + 3.14*pow(a2.r, 2));
}

double SurfaceArea(SPHERE a1, SPHERE a2){

    return (4*3.14*pow((a1.r),2) + 4*3.14*pow((a2.r),2));
}

double Volume(SPHERE a1, SPHERE a2){
    
    return ((4*3.14*pow(a1.r, 3)/3) + (4*3.14*pow(a2.r, 3)/3));
}
