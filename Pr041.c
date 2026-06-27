//Program 41 (27th June 2026)
//WAP to print the sum of first n natural numbers using recursion
#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter a Number \n");
    scanf("%d",&n);
    printf("sum is %d \n",sum(n));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)+n;
}