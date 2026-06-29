//Program 46 (29th June 2026)
//WAF to print the sum upto nth term of fibonacci series
#include<stdio.h>

int fib(int n);
int fib_sum(int n);

int main() {
    int n;
    printf("Enter a number and I will give you the sum of fibonacci series upto that term \n");
    scanf("%d",&n);
    printf("The sum is %d", fib_sum(n));
    return 0;
}
int fib(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
}
int fib_sum(int n) {
    if(n == 0)
        return 0;
    return fib(n) + fib_sum(n-1);
}