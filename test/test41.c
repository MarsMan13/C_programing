#include <stdio.h>
int def(int);

int main(void){

    int n;

    printf("10진수 정수 입력: ");
    scanf("%d", &n);

    printf("%d\n", def(n));

    return 0;
}

int def(int n){

    int answer = 0;
    int ten = 1;

    while(n!= 0){
        answer += ten*(n%2);
        n /=2;
        ten*=10;
    }
    return answer;
}
