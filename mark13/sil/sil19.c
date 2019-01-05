#include <stdio.h>
int absValue(int);
void swap(int *, int*);

int main(void)
{
    int a, b, c;
    printf("Input: ");
    scanf("%d %d %d", &a, &b, &c);

    a = absValue(a);
    b = absValue(b);
    c = absValue(c);
    swap(&a, &b);
    swap(&b, &c);
    swap(&a, &b);

    printf("Result: %d %d %d\n", c, b, a);
    return 0;
}

int absValue(int x)
{
    x = (x >= 0) ? x : x*(-1);
    return x;
}

void swap(int *xx, int *yy)
{
    int temp = *xx;
    *xx = ((*xx - *yy) < 0) ? *xx : *yy;
    *yy = ((temp - *yy) >= 0) ? temp : *yy;

}
