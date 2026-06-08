//WAP to find area of a circle 
#include<stdio.h>
int main() {
    int r ;
    float pie = 3.14;
    printf("Enter the radius of your circle \n");
    scanf("%d",&r);
    printf("The area of your circle is %.2f", pie*r*r);
    return 0;
}