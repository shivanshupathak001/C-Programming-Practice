//Program 44 (28th June 2026)
//WAP to calculate percentage of a student from marks in science , maths and pyhton using function
#include<stdio.h>
float percentage(float sc , float ma , float py);
int main() {
    float sc;
    float ma;
    float py;
    printf("Enter your marks of science , maths and python \n");
    scanf("%f",&sc);
    scanf("%f",&ma);
    scanf("%f",&py);
    printf("Your percentage is %.2f \n",percentage(sc,ma,py));
    return 0;
}
float percentage(float sc , float ma , float py) {
    float perc=((sc+ma+py)/300)*100;
    return perc;
}