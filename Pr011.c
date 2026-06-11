//Program 11 (12th June 2026)
// WAP to give grades to a student
// marks<30 is C
// 30<=marks<70 is B
// 70<=marks<90 is A
// 90<=marks<=100 is A+
#include<stdio.h>
int main() {
    int marks ;
    printf("Your Marks ?\n");
    scanf("%d",&marks);
    if(marks<30 && marks>=0) {
        printf("You got C grade \n");
    }
    else if(marks<70 && marks>=30) {
        printf("You got B grade \n");
    }
    else if(marks<90 && marks>=70) {
        printf("You got A grade \n");
    }
    else if(marks<=100 && marks>=90) {
        printf("You got A+ grade \n");
    }
    else {
        printf("Invalid Marks Entered \n");
    }
    return 0;
}