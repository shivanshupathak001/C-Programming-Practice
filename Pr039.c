//Program 39 (26th June 2026)
//WAP to print "Hello World" n (given by user) times using recursion
#include<stdio.h>
int printHW(int count);
int main() {
    int n;
    printf("Enter How many Times Hello World should be printed \n ");
    scanf("%d",&n);
    printHW(n);
    return 0;
}

int printHW(int count){
    if(count==0){
        return 0;
    }
    printf("Hello World \n");
    printHW(count-1);
}