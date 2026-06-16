//Program 19 (16th June 2026)
// WAP to print the sum of first n natural numbers. Also print them in reverse 
#include<stdio.h>
int main() {
    int n;
    int sum=0;
    printf("Enter a Number \n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++) {
        sum=sum+i;
    }
    for(int j=n;j>=0;j--) {
        printf("%d \n",j);
    }
    printf("The sum is %d", sum);
    return 0;
}