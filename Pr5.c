//WAP to check whether a number is odd or even ( without conditional statement )
#include<stdio.h>
int main() {
    printf("0--Odd , 1--Even \n");
    int x ;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("%d",x%2==0);
    return 0;
}