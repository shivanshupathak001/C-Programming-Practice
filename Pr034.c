//Program 34 (23rd June 2026)
// WAP to call a function that prints 'Namaste' if user is Indian and 'Bonjour' if user is French
#include<stdio.h>
void Namaste();
void Bonjour();

int main() {
    char ln;
    printf("Enter 'I' or 'i' for Indian / Enter 'F' or 'f' for French \n");
    scanf("%c",&ln);
    if(ln=='I' || ln=='i') {
        Namaste();
    }
    else if(ln=='F' || ln=='f') {
        Bonjour();
    }
    else {
        printf("Invalid Character Entered \n");
    }
    return 0;
}
void Namaste() {
    printf("Namaste \n");
}
void Bonjour() {
    printf("Bonjour \n");
}