//Program 42 (27th June 2026)
//WAP to print the factorial of n numbers (given by the user) using recursion
#include<stdio.h>
int fact(int n);
int main(){
    int num;
    printf("Enter a Number \n");
    scanf("%d",&num);
    printf("The Factorial of your given number is %d \n",fact(6));
    return 0;
}
int fact(int n){
    if (n==1){
        return 1;
    }
    return fact(n-1)*n;
}