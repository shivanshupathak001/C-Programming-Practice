//Program 28 (20th June 2026)
// WAP to print this pattern using nested loop
/* 
***** 
*****
*****
*****
*/
#include<stdio.h>
int main() {
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=5;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}