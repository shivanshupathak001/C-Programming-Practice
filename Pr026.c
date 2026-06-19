//Program 26 (19th June 2026)
// WAP to print reverse of the table ( 10 to 1) for a number 
#include<stdio.h>
int main() {
    int num;
    printf("Enter a Number \n");
    scanf("%d",&num);
    for(int i=10;i>=1;i--) {
        printf("%d \n",i*num);
    }
    return 0;
}