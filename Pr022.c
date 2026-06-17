//Program 22 (17th June 2026)
// WAP to Keep Taking Numbers as input from user until user enters a number which is a multiple of 7
#include<stdio.h>
int main() {
    int num;
    printf("Enter a Number but it should not be the multiple of 7 \n");
    while(1){
        scanf("%d",&num);
        if(num%7==0) {
            break;
        }
    }
    printf("Multiple of 7 is entered ..... i'm done \n");
    return 0;
}