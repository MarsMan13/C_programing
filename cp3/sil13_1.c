#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


typedef float* Vector_Comp;
typedef float Comp;
typedef float VectorSize;
typedef float Distance;
typedef float Scalar;

typedef struct{
    Vector_Comp coms;
    int vec_size;
}Vector;

VectorSize vSize(Vector v);
Distance DistVector(Vector v1, Vector v2);
Scalar innerProduct(Vector v1, Vector v2);


int main(void){

    Vector v1, v2;
    int i;

    scanf("%d", &(v1.vec_size));
    v1.coms = (Vector_Comp)malloc(sizeof(float) * (v1.vec_size));
    for(i = 0; i<v1.vec_size; i++){
        scanf("%f", &(v1.coms)[i]);
    }


    scanf("%d", &(v2.vec_size));
    v2.coms = (Vector_Comp)malloc(sizeof(float) * (v2.vec_size));
    for(i = 0; i<v2.vec_size; i++){
        scanf("%f", &(v2.coms)[i]);
    }

    printf("%.2f\n", vSize(v1));
    printf("%.2f\n", vSize(v2));

    if(v1.vec_size == v2.vec_size){
        printf("%.3f\n", DistVector(v1, v2));
        printf("%.6f\n", innerProduct(v1, v2));
    }
    return 0;
}

VectorSize vSize(Vector v){
    
    float tot = 0;
    int i;
    for(i = 0; i<v.vec_size; i++){
        tot += pow(v.coms[i], 2);
    }
    return sqrt(tot);
}

Distance DistVector(Vector v1, Vector v2){
    
    float tot = 0;
    int i;

    for(i = 0; i<v1.vec_size; i++){
        tot += pow(v1.coms[i] - v2.coms[i], 2);
    }

    return sqrt(tot);
}

Scalar innerProduct(Vector v1, Vector v2){
    
    float tot = 0;
    int i;
    for(i = 0; i<v1.vec_size; i++){
        tot += (v1.coms[i] * v2.coms[i]);
    }

    return tot;
}
