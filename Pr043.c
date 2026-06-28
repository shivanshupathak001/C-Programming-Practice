//Program 43 (28th June 2026)
//WAP to convert degree celsius into degree fahrenheit using function
#include<stdio.h>
float convertTemp(float cel);
int main() {
    float cel;
    printf("Enter the temperature in degree celsius \n");
    scanf("%f",&cel);
    printf("The temperature in fahrenheit is %f \n",convertTemp(cel));
    return 0;
}
float convertTemp(float cel){
    float far=cel*(9.0/5.0)+32;
    return far;
}