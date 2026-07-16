//Program 76 (16th July 2026)
//WAP to input the user's name and prints its length
#include<stdio.h>
int countLength(char arr[]);
int main() {
    char name[100];
    printf("Enter Your Name :-\n");
    fgets(name,100,stdin);
    printf("Length of your name is :- %d",countLength(name));
    return 0;
}
int countLength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1; //If we return count instead of count-1 , then it will also count null character as well ...
}