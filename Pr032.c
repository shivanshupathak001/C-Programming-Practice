//Program 32 (22nd June 2026)
// WAP to program to print the smallest number
#include<stdio.h>
int main() {
    int a , b , c ;
    printf("Enter Three Numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c) {
        printf("Smallest Number is %d",a);
    }
    else if(b<=a && b<=c) {
        printf("Smallest Number is %d",b);
    }
    else if(c<=a && c<=b) {
        printf("Smallest Number is %d",c);
    }
    return 0;
}