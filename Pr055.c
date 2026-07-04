//Program 55 (4th July 2026)
//WAP to print the address of a variable using function and call by reference
#include<stdio.h>
void printAddress(int *n);
int main() {
    int num = 4;
    printAddress(&num);
    printf("The address of the variable according to the main function is %p \n",&num);
    return 0;
}
void printAddress(int *n){
    printf("The address of the variable according to our function is %p \n",n);
}
//Both outputs will be showing same address