#include <stdio.h>
//test8.c by my hands

int main(void)
{
    int arr[5];
    int max = 0, min, sum;
    int size;

    printf("Enter the n : ");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);


    for(size=4 ; size>=0 ; size--)
    {   
        if(max <= arr[size])
        {    
            max = arr[size];
        }   
        printf("Max : %d\n", max);
    }
        


    return 0;
}
