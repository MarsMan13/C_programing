#include <stdio.h>

int def1(int, int);
int gl =1;


int main(void)
{
    int num;
    int m;
    int temp = 1;
    int x = 0;

    printf("Input: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Input number cannot be negative.\n");
        return 0;
    }

    
    while((temp*temp) <= (num))
    {
        temp *= 10;
    }
    
    temp /= 10;


    while(num >= gl)
    {
        gl*=10;

    }
    gl /= 10;


    x = def1(num, temp);
//
    if(x == 1)
    {
    printf("%d is a palindrome number.\n", num);
    }
    else
    {
    printf("%d is not a palindrome number.\n", num);
    }
    return 0;
}


int def1(int num, int digit)
{

    int x = 0;
    
    if(digit == 1)
    {
        if((num/digit)-((int)(num/(digit*10))*10 == (num/(gl/digit))-(int)((num/(gl/digit))/10)*10))
        {
            return 1;
        }
    }
    else
    {
        if(def1(num, digit/10) == 1)
        {
            if((num/digit)-((int)(num/(digit*10)))*10 == (num/(gl/digit)) - (int)((num/(gl/digit))/10)*10)
            {
                return 1;
            }
        }
    }

}
