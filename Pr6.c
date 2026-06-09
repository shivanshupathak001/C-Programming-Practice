// WAP to check if a given character is digit or not  
#include<stdio.h>
int main() {
    printf("0--Not Digit , 1--Digit \n");
    int ch ;
    printf("Enter a number \n");
    scanf("%d",&ch);
    printf("%d \n",ch>0 && ch<9);
    return 0;
}