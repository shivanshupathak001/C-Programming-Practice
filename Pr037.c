//Program 37 (25th June 2026) 
//WAP to calculate final price of a product by adding 18% GST using function
#include<stdio.h>
void calculatePrice(float price);
int main() {
    float price;
    printf("Enter the Price \n");
    scanf("%f",&price);
    calculatePrice(price);
    return 0;
}
void calculatePrice(float price) {
    price=price+(price*0.18);
    printf("The Final Price is %.3f \n",price);
}