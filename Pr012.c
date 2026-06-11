//Program 12 (12th June 2026)
// WAP to find if a character entered by the user is upper case or not
#include<stdio.h>
int main() {
    char ch ;
    printf("Enter a Character \n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z') {
        printf("Upper Case \n");
    }
    else if(ch>='a' && ch<='z') {
        printf("Lower Case \n");
    }
    else {
        printf("Invalid Character Entered \n");
    }
    return 0;
}