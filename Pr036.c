//Program 36 (24th June 2026)
//WAP to print the table of a number given by the user with the help of function
#include<stdio.h>
void printTable(int n);        //n--> parameter/formal parameter
int main() {
   int num; 
   printf("Enter a Number \n");
   scanf("%d",&num);
   printTable(num);            //num-->argument/actual parameter (you can also take 'n' on the place of 'num') 
   return 0;
}
void printTable(int n) {       //n--> parameter/formal parameter
    for(int i=1;i<=10;i++){
        printf("%d \n",i*n);
    }
}