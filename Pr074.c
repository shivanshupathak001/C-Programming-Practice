//Program 74 (14th July 2026)
//WAP to ask the user to enter their full name and print it back to them
#include<stdio.h>
int main() {
    char fullName[100];
    printf("Write Your Full Name :-\n");
    fgets(fullName,100,stdin);
    printf("Your Full Name is ");
    puts(fullName);
    return 0;
}