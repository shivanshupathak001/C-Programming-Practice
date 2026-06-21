//Program 30 (21st June 2026)
// WAP to print a prime numbers in a range between 2 to 50
#include<stdio.h>
int main() {
    int prime=0;
    int not_prime=0;
    for(int i=2;i<=50;i++) {
        int count=0;
        for(int j=1;j<=i;j++) {
            if(i%j==0) {
            count++;
            }
        }
        if(count==2) {
            printf("Prime Number %d \n", i) ;
            prime++;
        }
        else {
            printf("Not a Prime Number %d \n", i);
            not_prime++;
        }
    }
    printf("%d Prime Numbers \n",prime);
    printf("%d Non Prime Numbers \n",not_prime);
    return 0;
}