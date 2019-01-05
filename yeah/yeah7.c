#include <stdio.h>
void testf(int);

int main(void)
{
    int cnt = 0;
    printf("Enter the cnt : ");
    scanf("%d", &cnt);

    testf(cnt);


    return 0;
}

void testf(int num)
{

    if(num == 0)
    {
        printf("finish!");
        return;
    }
    else
    {
        printf(" : %d\n", num);
        testf(num-1);
    }

}
