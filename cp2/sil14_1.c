#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef float* Vector_Comp;
typedef float Comp;

typedef struct{

    Vector_Comp comps;
    int vec_size;
}Vector;

typedef float Distance;
typedef float Scalar;
typedef float Size;

Distance DistVector(Vector v1, Vector v2);
Scalar innerProduct(Vector v1, Vector v2);
Size vectorSize(Vector v);



int main(void){
    
    int i;
    Vector v1, v2;
    
    
    scanf("%d", &(v1.vec_size));
    
    v1.comps = (Vector_Comp)malloc(sizeof(Comp)*v1.vec_size);
    
    for(i = 0; i<(v1.vec_size); i++)
        scanf("%f", &(v1.comps[i]));


    scanf("%d", &(v2.vec_size));

    v2.comps = (Vector_Comp)malloc(sizeof(Comp)*v2.vec_size);
    
    for(i = 0; i<(v2.vec_size); i++)
        scanf("%f", &(v2.comps[i]));

    if(v1.vec_size != v2.vec_size){
        printf("%.2f\n", vectorSize(v1));
        printf("%.2f\n", vectorSize(v2));
    }
    else{
        printf("%.2f\n", vectorSize(v1));
        printf("%.2f\n", vectorSize(v2));
        printf("%.3f\n", DistVector(v1, v2));
        printf("%.6f\n", innerProduct(v1, v2));
        }
    
    
        
    
    return 0;
}

Distance DistVector(Vector v1, Vector v2){
    
    int i;
    float sum = 0;

    for(i = 0; i<v1.vec_size; i++){
        sum += pow(v1.comps[i] - v2.comps[i], 2);
    }
    return sqrt(sum);
}

Scalar innerProduct(Vector v1, Vector v2){
    int i;
    float ret = 0;

    for(i = 0; i<v1.vec_size; i++){
        ret += (v1.comps[i] * v2.comps[i]);
    }

    return ret;
}

Size vectorSize(Vector v){
    
    int i;
    float sum = 0;

    for(i = 0; i<v.vec_size; i++){
        sum += pow(v.comps[i],2);
    }

    return sqrt(sum);

}
