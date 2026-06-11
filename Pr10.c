// WAP to check whether a number is negative , odd or even using if - else 
#include<stdio.h>
int main() {
    int num ;
    printf("Enter a number \n");
    scanf("%d",&num);
    if(num>=0){
        if(num%2==0){
            printf("Even Number \n");
        }
        else {
            printf("Odd Number \n");
        }
    }
    else {
        printf("Negative Number \n");
    }
    return 0;
}