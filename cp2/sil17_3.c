#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct __SUBJECT__{
    char number[8];
    int credit;
    double grade;

}subject;

typedef struct __STUDENT__{
    int id;
    int number_of_course;
    subject *courses;

}student;


int main(void){
    
    int n;
    student *p;
    int i, j;
    char temp[20];
    double tot;
    double tot_credit;


    scanf("%d", &n);

    p = (student *)malloc(n * sizeof(student));


    for(i = 0; i<n; i++){
        scanf("%d %d", &(p[i].id), &(p[i].number_of_course));
        
        p[i].courses = (subject *)malloc((p[i].number_of_course) * sizeof(subject));
        for(j = 0; j < p[i].number_of_course; j++){
            scanf("%s %d %lf", temp, &((p[i].courses[j]).credit), &((p[i].courses[j]).grade));
            strcpy((p[i].courses[j]).number, temp); 
        }

    }

    printf("==========\n");

    for(i = 0; i<n; i++){
        tot = 0;
        tot_credit = 0;
        for(j = 0; j< p[i].number_of_course; j++){
            tot += ((p[i].courses[j].credit) * (p[i].courses[j].grade)); 
            tot_credit += p[i].courses[j].credit;
        }
        printf("%d / %lf\n", p[i].id, tot/tot_credit);
    }
    


    return 0;
}
