//Program 20 (16th June 2026)
// WAP to print the table (upto 10) of the number given by the user 
#include<stdio.h>
int main() {
    int num;
    printf("Enter a Number \n");
    scanf("%d",&num);
    for(int i=1;i<=10;i++) {
        printf("%d \n",num*i);
    }
    return 0;
}