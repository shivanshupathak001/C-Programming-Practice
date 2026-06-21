//Program 29 (21st June 2026)
// WAP to check if a number is prime or not
#include<stdio.h>
int main() {
    int num; 
    int flag=0;
    printf("Enter a Number \n");
    scanf("%d",&num);
    if(num<=1) {
        printf("Not a Prime Number \n");
    }
    else {
        for(int i=1;i<=num;i++) {
            if(num%i==0) {
                flag++;
            }
        }
        if(flag==2) {
            printf("Prime Number \n");
        }
        else {
            printf("Not a Prime Number \n");
        }
    }
    return 0;
}