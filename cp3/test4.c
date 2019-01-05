#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    int id;
    char name[26];
    double gradePoints;
};

void callbyreference(int *p);

int main(void){
    
    struct student std[50];
    std[13].id = 990513;

    struct student *pStd;
    pStd = std;

    printf("%d\n", std[13].id);
    
    printf("%d\n", pStd[13].id);
    
    printf("%d\n", (*(pStd+13)).id);

    callbyreference(&(std[13].id));
    
    printf("%d\n", std[13].id);
    
    return 0;
}

void callbyreference(int *p){
    *p = 999999;
    
}
