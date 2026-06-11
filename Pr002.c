//Program 2 (7th June 2026)
//WAP to do arithmetic operations in two numbers 
#include<stdio.h>
int main() {
    int a , b ;
    printf("Enter First Number \n");
    scanf("%d" , &a);
    printf("Enter Second Number \n");
    scanf("%d" , &b);
    printf("The sum of your given numbers is %d \n", a+b);
    printf("The product of your given numbers is %d \n", a*b);
    printf("The difference of your given numbers is %d \n", a-b);
    printf("The qoutient when b is divided by a is %d \n", a/b);
    printf("The remainder when b is divided by a is %d \n", a%b);
    return 0;
}