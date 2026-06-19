//Program 25 (19th June 2026)
// WAP to print the factorial of a number n
#include<stdio.h>
int main() {
    int num;
    printf("Enter a Number \n");
    scanf("%d",&num);
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("Factorial is %d",fact);
    return 0;
}