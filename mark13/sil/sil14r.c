#include <stdio.h>
int def1(int);
void def2(int);
void def3(int);

int main(void)
{
    int year;

    printf("Enter the year to be tested: ");
    scanf("%d", &year);

    year = def1(year);

    return 0; 
}
//**********************************************************
int def1(int year)
{       
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0))
    {    
        printf("It is a leap year.\n");
        return year;
    }
    else
    {
        def2(year--);
    }
}

void def2(int year)
{    
    int year2= year;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0))
    {
        printf("It is not a leep year.\n");
        printf("%d is a leap year.\n", year2);
    }
    else 
    {
        def3(year2);
    }
    return;
}

void def3(int year)
{
    int year2= year;
    year2--;
    def2(year2);
    return;
}
