//Program 72 (12th July 2026)
//WAP to create the strings firstName and lastName to store details of user and print all the characters using a loop
#include<stdio.h>
void printString(char arr[]);
int main() {
    char firstName[]="Shivanshu";
    char lastName[]="Pathak";
    printString(firstName);
    printString(lastName);
    return 0;
}
void printString(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}