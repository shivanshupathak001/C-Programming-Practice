//Program 40 (26th June 2026)
//WAP to print the sum of first 5 natural numbers using recursion
#include<stdio.h>
int sum(int n);
int main(){
    printf("sum is %d \n",sum(5));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)+n;
}