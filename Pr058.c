//Program 58 (5th July 2026)
//WAP to Find the Maximum Number between Two Numbers using a Pointer
#include<stdio.h>
int main() {
    int num1 ;
    int num2 ;
    int *p1 ;
    int *p2 ;
    printf("Enter First Number :-\n");
    scanf("%d",&num1);
    printf("Enter Second Number :-\n");
    scanf("%d",&num2);
    p1=&num1;
    p2=&num2;
    if(*p1>*p2){
        printf("%d is greater than %d",*p1,*p2);
    }
    else if(*p1==*p2){
        printf("%d is equal to %d",*p1,*p2);
    }
    else{
        printf("%d is greater than %d",*p2,*p1);
    }
    return 0;
}