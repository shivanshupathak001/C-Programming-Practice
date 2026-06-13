//Program 13 (13th June 2026)
// WAP to check if a given number is arsmtrong number or not ( by if else ) - for 3 digit number
#include<stdio.h>
int main() {
    int num , extra_variable , a , b , c ;
    printf("Enter a Number \n");
    scanf("%d",&num);
    a=num%10;
    b=(num/10)%10;
    c=num/100;
    if((a*a*a)+(b*b*b)+(c*c*c)==num) {
        printf("You entered number is armstrong number \n");
    }
    else {
        printf("Not an armstrong number \n");
    }
    return 0;
}