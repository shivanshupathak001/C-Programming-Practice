//Program 35 (24th June 2026)
// WAP to print the sum of two numbers by calling the function
#include<stdio.h>
int sum(int a , int b) ;
int main() {
    int a;
    int b;
    printf("Enter First Number \n");
    printf("Enter Second Number\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The sum of your given numbers is %d", sum(a,b));
    return 0;
}
int sum(int a , int b) {
    return a+b;
}