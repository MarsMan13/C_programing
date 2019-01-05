#include <stdio.h>
#include <stdlib.h>
void def(char *arr, int *count);

int main(void){

    char arr[10] = {'I', 'L', 'I','K','E','C','L','A','N', 'G'};
    int count = 0;
    int i =0;

    for(i = 0; i<10; i++)
        printf("%c", *(arr+i));
    printf("\n");
    
    def(arr, &count);

    printf("%d\n", count);

    return 0;
}

void def(char *arr, int *count){
    
    char x;
    int i = 0;
    scanf("%c", &x);

    while(i<10){
        if(*(arr+i) == x)
            (*count)++;
        i++;
    }


}
