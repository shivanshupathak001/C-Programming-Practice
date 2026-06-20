//Program 27 (20th June 2026)
// WAP to calculate the sum of all the numbers between 5 to 50 (including 5 and 50)
#include<stdio.h>
int main() {
    int sum=0;
    for(int i=5;i<=50;i++) {
        sum=sum+i;
    }
    printf("Sum is %d",sum);
    return 0;
}