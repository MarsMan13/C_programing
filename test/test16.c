#include <stdio.h>
void add(int, int);

int main(void)
{
    int first;
    int second;

    printf("Enter the 2_n : ");
    scanf("%d %d", &first, &second);

    add(&first, &second);
    printf("%d\n", first);

    return 0;
}

void add(int *first_v, int *second_v)
{
    *fisrt_v = *first_v + *second_v;

}
