#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
    int id;
    char name[26];
    double gradePoints;
}STUDENT;


int main(void){
    
    int i;
    STUDENT *std;
    std = (STUDENT *)malloc(sizeof(STUDENT));

    i =1;
    while(1){
        scanf("%d %s %lf", &(std[i-1].id), std[i-1].name, &(std[i-1].gradePoints));
        if(i == 5) break;
        
        std = (STUDENT *)realloc(std, (++i) * sizeof(STUDENT));
    }
    
    i =0;
    printf("--- CHeck ---\n");
    while(1){
        printf("%d %s %lf\n", std[i].id, std[i].name, std[i].gradePoints);
    if((++i) == 5) break;
    }
    
    

    return 0;
}
