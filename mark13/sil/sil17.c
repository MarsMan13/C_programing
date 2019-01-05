#include <stdio.h>
float avgFunc(float, float , float);
void gradeFunc(float);

int main(void)
{
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    avgFunc(a,b,c);


    return 0;
}

float avgFunc(float aa, float bb, float cc)
{
    float avg = (aa + bb + cc)/3.0;

    gradeFunc(avg);
    return 0;
}

void gradeFunc(float avg)
{
    if(avg >= 90)
        printf("A\n");
    else
    {    
        if(avg >= 80)
            printf("B\n");
        else
        {
            if(avg >= 70)
                printf("C\n");
            else
            {
                if(avg >= 50)
                    printf("D\n");
                else
                    printf("F\n");
            }
        }
        
    }
}
