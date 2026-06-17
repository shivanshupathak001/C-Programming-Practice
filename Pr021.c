//Program 21 (17th June 2026)
//WAP to keep taking numbers as input from user until user enters an odd number 
#include<stdio.h>
int main() {
    int num;
    printf("Enter a Number (don't dare to enter an odd number) \n");
    do{
        scanf("%d",&num);
        if(num%2!=0){
        break;
        }
    }
    while(1);
    printf("Odd Number Entered .... I'm Done \n");
    return 0;
}