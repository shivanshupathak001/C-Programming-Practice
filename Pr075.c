//Program 75 (15th July 2026)
//WAP to store a string using a character pointer, change it to another string, and print both strings
#include<stdio.h>
int main(){
    char *canChange="Hello World";
    puts(canChange);
    canChange="Hello";
    puts(canChange);
    return 0;
}