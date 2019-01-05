#include <stdio.h>

int main(void)
{
    int fir;
    int sec;
    int goal;

    printf("Enter Fir : ");
    scanf("%d", &fir);
    printf("Enter sec : ");
    scanf("%d", &sec);

    goal = (fir >= sec) ? (fir-sec) : (sec-fir) ;
    printf("%d\n", goal);

    return 0;




}
