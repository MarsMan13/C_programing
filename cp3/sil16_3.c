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

double calcCGPA(student s);

int main(void){

    int n;
    int i, j;
    student *people;
    
    scanf("%d", &n);
    people = (student*)malloc(sizeof(student) * n);
    for(i = 0; i<n; i++){
        scanf("%d %d", &(people[i].id), &(people[i].number_of_course));
        people[i].courses = (subject*)malloc(sizeof(subject) * people[i].number_of_course);
        for(j = 0; j<people[i].number_of_course; j++){
            scanf("%s %d %lf", people[i].courses[j].number, &(people[i].courses[j].credit), &(people[i].courses[j].grade));
        }
    }

    printf("==========\n");

    for(i = 0; i<n; i++){
        printf("%d / %f\n", people[i].id, calcCGPA(people[i]));
    }

    return 0;
}

double calcCGPA(student s){
    int i;
    double sum = 0;
    double sum2 = 0;
    for(i = 0; i<s.number_of_course; i++){
        sum += s.courses[i].credit * s.courses[i].grade;
        sum2 += s.courses[i].credit;
    }

    return sum/sum2;
}
