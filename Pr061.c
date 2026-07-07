//Program 61 (7th July 2026)
//WAP to Enter Price of 3 Items and Print their final cost with GST
#include<stdio.h>
int main() {
    float price[3];
    printf("Enter Prices of 3 Items :-\n");
    scanf("%f %f %f",&price[0],&price[1],&price[2]);
    printf("Total Price Including GST of 1st Item is %.2f\n",price[0]+price[0]*0.18);
    printf("Total Price Including GST of 2nd Item is %.2f\n",price[1]+price[1]*0.18);
    printf("Total Price Including GST of 3rd Item is %.2f\n",price[2]+price[2]*0.18);
    return 0;
}