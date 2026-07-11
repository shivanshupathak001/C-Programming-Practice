//Program 69 (11th July 2026)
//WAP to store the first n fibonacci numbers using an array
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number(greater than 2) :-\n");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<n;i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    printf("First %d fibonacci numbers are:\n", n);
    for(int i=0;i<n;i++) {
        printf("%d\t",fib[i]);
    }
    printf("\n");
    return 0;
}