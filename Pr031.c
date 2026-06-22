//Program 31 (22nd June 2026)
// WAP to check if given character is a digit or not
#include<stdio.h>
int main() {
    char ch;
    printf("Enter a Character: ");
    scanf("%d", &ch);  
    if(ch >= 48 && ch <= 57) {
        printf("It is a Digit\n");
    } 
    else {
        printf("It is not a Digit\n");
    }
    return 0;
}