//Program 57 (5th July 2026)
//WAP to calculate the Sum , Product and Average of 2 Numbers using a function and Print them in the main function using pointers
#include<stdio.h>
void doWork(int a , int b , int *sum , int *prod , int *avg);
int main(){
    int a=17;
    int b=3;
    int sum ; int prod ; int avg ;
    doWork(a,b,&sum,&prod,&avg);
    printf("Sum=%d\nProduct=%d\nAverage=%d\n",sum,prod,avg);
    return 0;
}
void doWork(int a , int b , int *sum , int *prod , int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}