#include <stdio.h>
void swap(int *, int *);
int def(int, int);

int main(void)
{
    int n, m;
    int summ;

    printf("Input first number : ");
    scanf("%d", &n);
    printf("Input second number : ");
    scanf("%d", &m);
    
    if(n <1 || m <1)
    {
        printf("Input is less than 1\n");
    }
    else
    {
        swap(&n, &m);
        summ = def(n, m);
        printf("Result: %d\n", summ);
    }
    return 0;
}

void swap(int *nn, int *mm)
{
    int temp = *nn;
    *nn = (*nn >= *mm) ? *nn : *mm;
    *mm = (temp >= *mm) ? *mm : temp;
}

int def(int nn, int mm)
{
    int summ = 0;

    for(mm ; mm <= nn ; mm++)
    {
        if(mm%2 == 0 || mm%3 == 0)
        {
            summ += mm;
        }
    }

    return summ;
}
