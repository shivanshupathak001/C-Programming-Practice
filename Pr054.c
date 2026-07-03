//Program 54 (3rd July 2026)
//WAP to Swap 2 numbers a and b using call by reference
#include<stdio.h>
void swap(int *x , int *y);
int main() {
    int a ;
    int b ;
    printf("Enter the value of a and b \n");
    scanf("%d %d",&a,&b);
    printf("Your entered values are a=%d and b=%d \n",a,b);
    swap(&a,&b);
    return 0;
}
void swap(int *x , int *y) {
    int z;
    z=*x;
    *x=*y;
    *y=z;
    printf("Swapped values are a=%d and b=%d",*x,*y);
}