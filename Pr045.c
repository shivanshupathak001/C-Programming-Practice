//Program 45 (29th June 2026)
//WAF to print nth term of the fibonacci series
#include<stdio.h>
int fib(int n);
int main() {
    int n;
    printf("Enter the number and i will give you the corresponding fibonacci series term \n");
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
int fib(int n) {
    if (n==0) {
        return 0;
    }
    else if (n==1) {
        return 1;
    }
    else {
    return fib(n-1) + fib(n-2);
    }
}