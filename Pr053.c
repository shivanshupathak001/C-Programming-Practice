//Program 53 (3rd July 2026)
//WAP to Swap 2 numbers a and b using call by value
#include<stdio.h>
void swap(int a , int b);
int main() {
    int a ;
    int b ;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);
    printf("your given values are a = %d and b = %d \n",a,b);
    swap(a,b);
    return 0;
}
void swap(int a , int b) {
    int t;
    t=a;
    a=b;
    b=t;
    printf("swapped values are a = %d and b = %d",a,b);
}