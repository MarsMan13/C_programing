#include <stdio.h>

int main(void)
{
    float num = 0;
    printf("Input : ");
    scanf("%f", &num);
    
    printf("Use \">\": %d\n", (int)((num-(int)num)*10)>4);
    printf("Use \">=\": %d\n", (num-(int)num)*10>=5);
    printf("Use \"==\": %d\n", (int)(num-(int)num+0.5)==1);
    printf("Use \"!=\": %d\n", !((int)((num-(int)num)*2)!=1));




    return 0;
}
