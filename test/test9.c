#include <stdio.h>

int main(void)
{
    int arr[5];
    int max, min, sum, i;

    for(i=0 ; i<5 ; i++)
    {
        printf("Enter the n : ");
        scanf("%d", &arr[i]);

    }

    max=min=sum=arr[0];
    for(i=1;<5; i++)
    {
        sum += arr[i];
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];

    }

    printf("Max : %d", max);
    printf("min : %d", min);
    printf("sum : %d", sum);

    return 0;

}
