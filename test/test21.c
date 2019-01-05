#include <stdio.h>
void def1(int *, int *);
void def2(int *, int *);
int a,b;

int main(void)
{
    int a,b;

    printf("Input two number : ");
    scanf("%d %d", &a, &b);
    
    def1(&a, &b);
    def2(&a, &b);

    return 0;
}

void def1(int *a, int *b)
{
    a = *a + *b;
    b = *a - *b;
    *a = *a * *b;
    *b = *a / *b / *b;

}
void def2(int *a, int *b)
{
    printf("%d %d %d %d\n", a, b, *a, *b);

}
