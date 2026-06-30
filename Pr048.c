//Program 48 (30th June 2026)
//WAF to find square root of a number 
#include<stdio.h>
#include<math.h>

float findSquareRoot(float n);

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    printf("Square root = %.2f", findSquareRoot(num));
    return 0;
}
float findSquareRoot(float n) {
    return sqrt(n);
}