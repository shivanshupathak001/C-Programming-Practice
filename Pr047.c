//Program 47 (30th June 2026)
//WAF to find sum of digits of a number 
#include<stdio.h>
int sum_digits(int n);
int main() {
    int num;
    printf("Enter a Number , I will give you the sum of the digits \n");
    scanf("%d",&num);
    printf("The sum is %d",sum_digits(num));
    return 0;
}
int sum_digits(int n){
    int sum=0;
    while (n!=0) {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}