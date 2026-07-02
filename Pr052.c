//Program 52 (2nd July 2026)
//WAP to calculate area of an square by making two functions (one by call by value and another by call by reference)
#include<stdio.h>
void square(int n);
void _square(int *n);
int main() {
    int side;
    printf("Enter the side of a square = \n");
    scanf("%d",&side);
    square(side);
    _square(&side);
    return 0;
}
void square(int n){
    int num;
    num=n*n;
    printf("Square through call by value is %d\n",num);
}
void _square(int *n){
    int num;
    num=(*n)*(*n);
    printf("Square through call by reference is %d\n",num);
}