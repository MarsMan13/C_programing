#include <stdio.h>
#include <string.h>



int main(void){
    
    char str[80] = "Einstein, Albert; 1234 97 A";
    char strOut[80];
    char name[50];
    char id[5];
    int score;
    char grade;
    int n1, n2;

    printf("String contains : \"%s\"\n", str);
    n1 = sscanf(str, "%49[^;] %*c %4s %d %c", name, id, &score, &grade);

    printf("Reformatted data : \n");
    printf("\tName : \t[%s]\n", name);
    printf("\tID : \t[%s]\n", id);
    printf("\tScore : \t%d\n", score);
    printf("\tGrade : \t%c\n", grade);

    n2 = sprintf(strOut, "[%s] / %4s / %3d / %c", name, id, score, grade);

    printf("New String :\t\"%s\"\n", strOut);

    printf("n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}
