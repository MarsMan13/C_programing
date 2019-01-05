#include <stdio.h>
//test10.c


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
    for(i=1; i<5; i++)
    {
        sum += arr[i];
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];

    }

    printf("Max : %d\n", max);
    printf("min : %d\n", min);
    printf("sum : %d\n", sum);

    return 0;

}
