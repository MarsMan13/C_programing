#include <stdio.h>
#include <stdlib.h>
void gcd(int a, int b, int *c);
void lcd(int a, int b, int *c);
void def(int a, int b, int *c);

int main(void){

    int a, b, c;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    gcd(a, b, &c);
    printf("GCD is %d\n", c);
    
    lcd(a, b, &c);
    printf("LCD is %d\n", c);




    return 0;
}



void gcd(int a, int b, int *c){
    
    int i;
    
    *c = 1;
    i = 2;
    while(i <= a && i<= b){
        if(a%i == 0 && b%i == 0){
            a/=i;
            b/=i;
            *c *= i;
            i = 2;
        }
        else{
            i++;
        }
    }
    

}

void lcd(int a, int b, int *c){

    int i = 2;

    *c= 1;
    while(i <= a && i<= b){
        if(a%i == 0 && b%i == 0){
            a/=i;
            b/=i;
            *c *=i;
            i = 2;
        }
        else
            i++;
    }
    *c *= (a*b);   
}

void def(int a, int b, int *c){


}



