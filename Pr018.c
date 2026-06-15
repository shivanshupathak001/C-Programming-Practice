//Program 18 (15th June 2026)
// WAP to print the number from 0 to n , if n is given by the user
#include<stdio.h>
int main() {
    int num;
    printf("Enter a Number \n");
    scanf("%d",&num);
    for(int i=0;i<=num;i++) {
        printf("%d \n",i);
    }
    return 0;
}