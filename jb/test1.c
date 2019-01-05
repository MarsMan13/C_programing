#include <stdio.h>

int main(void)
{
    int fir, gong, index;

    printf("세 수로 이루어진 등차수열 출력하기\n");

    printf("시작값 : ");
    scanf("%d", &fir);
    printf("공차 : ");
    scanf("%d", &gong);
    printf("시작 인덱스 : ");
    scanf("%d", &index);
    
    printf("%d %d %d\n", (fir+((3+2*index)%3)*gong), (fir+((4+2*index)%3)*gong), (fir+((5+2*index)%3)*gong));
    return 0;

}
