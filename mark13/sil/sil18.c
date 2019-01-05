#include <stdio.h>
void def1(float, float);
void def2(float, float);
void def3(float, float);
void def4(float, float);

int main(void)
{
    float a=0, b=0;
    char c=0;

    printf("Operator (+, -, *, /)\n");
    printf("Please enter the formula. (ex : 12.3 + 5.5)\n");

    scanf("%f %c %f", &a, &c, &b);
    
    switch((int)b)
    {
    case 0 : printf("Division by zero\n");
             break;

    default :
        switch(c)
        {
        case '+' : def1(a, b);
                    break;
        case '-' : def2(a, b);
                    break;
        case '*' : def3(a, b);
                    break;
        case '/' : def4(a, b);
                    break;
        default : printf("Invalid operator : %c\n", c);
                  break;
        }
    }


    return 0;
}

void def1(float aa, float bb)
{
    printf("%.2f + %.2f = %.2f\n", aa, bb, aa+bb);
}

void def2(float aa, float bb)
{
    printf("%.2f - %.2f = %.2f\n", aa, bb, aa-bb);
}

void def3(float aa, float bb)
{
    printf("%.2f * %.2f = %.2f\n", aa, bb, aa*bb);
}

void def4(float aa, float bb)
{
    printf("%.2f / %.2f = %.2f\n", aa, bb, aa/bb);
}


