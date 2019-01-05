#include <stdio.h>
int func(float);


int main(void)
{
    float a,b,c;
    float aa, bb, cc;
    float tot;

    printf("Enter the 1 : ");
    scanf("%f", &a);
    aa = 0.2*a;
    printf("Enter the 1 : ");
    scanf("%f", &b);
    bb = 0.3*b;
    printf("Enter the 1 : ");
    scanf("%f", &c);
//    printf("%f\n", c);
    cc = 0.5*c;
//    printf("%f\n", cc);

    tot = aa + bb + cc;
//   printf("%f\n", tot);

    printf("Grade is %c\n", 68-func(tot));


    return 0;
}

int func(float tot)
{
    int result;
    result = (int)tot / 30;
//    printf("%d\n", result);
    return result;
}
