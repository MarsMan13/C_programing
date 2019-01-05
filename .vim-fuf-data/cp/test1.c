#include <stdio.h>

int main(void)
{
    int a;
    int *p;
    int **q;
    int ***r;

    p = &a;
    q = &p;
    r = &q;

    printf("Enter a number : ");
    scanf("%d", &a);
    printf("\nThe number is %d\n", a);

    printf("Enter a number : ");
    scanf("%d", p);
    printf("\nThe number is %d\n", a);

    printf("Enter a number : ");
    scanf("%d", *q);
    printf("\nThe number is %d\n", a);

    printf("Enter a number : ");
    scanf("%d", **r);
    printf("\nThe number is %d\n", a);

    return 0;

}
