//Program 38 (25th June 2026)
//WAP to calculate the area af a square , rectangle and circle using functions 
#include<stdio.h>
void squareArea(float side);
void circleArea(float radius);
void rectangleArea(float length , float breath);
int main(){
    int x;
    float a;
    float b;
    float c , d;
    printf("Enter 1 for square , Enter 2 for circle , Enter 3 for rectangle \n");
    scanf("%d",&x);
    switch(x) {
        case 1:
        printf("Enter the side of square \n");
        scanf("%f",&a);
        squareArea(a);
        break;
        case 2:
        printf("Enter the radius of circle \n");
        scanf("%f",&b);
        circleArea(b);
        break;
        case 3:
        printf("Enter the length and breath of rectangle \n");
        scanf("%f",&c);
        scanf("%f",&d);
        rectangleArea(c,d);
        break;
    }
    return 0;
}
void squareArea(float side){
    float sq_area=side*side;
    printf("Area of Square is %.2f \n",sq_area);
}
void circleArea(float radius){
    float cir_area=3.14*radius*radius;
    printf("Area of Circle is %.2f \n",cir_area);
}
void rectangleArea(float length , float breath){
    float rec_area=length*breath;
    printf("Area of Rectangle is %.2f \n",rec_area);
}