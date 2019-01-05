#include <stdio.h>
int whoisfirst(int, int, int(*dptr)(int, int));
int older(int, int);
int younger(int, int);


int main(void){

    int age1, age2;
    int first;

    scanf("%d %d", &age1, &age2);

    printf("\n***first Enter_1***\n");
    first = whoisfirst(age1, age2, older);
    printf("Between %d and %d, %d is first Enter\n\n", age1, age2, first);
    
    printf("***first Enter_2***\n");
    first = whoisfirst(age1, age2, younger);
    printf("Between %d and %d, %d is first Enter\n", age1, age2, first);
    

    return 0;
}


int whoisfirst(int age1, int age2, int(*dptr)(int, int)){

    return dptr(age1, age2);
}

int older(int age1, int age2){

    if(age1 > age2) return age1;
    else if(age1 < age2) return age2;
    else return 0;
}

int younger(int age1, int age2){

    if(age1 < age2) return age1;
    else if(age1 > age2) return age2;
    else return 0;
}
