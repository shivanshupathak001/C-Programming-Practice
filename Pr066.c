//Program 66 (9th July 2026)
//WAP to create a multidimensional array and print some elements
#include<stdio.h>
int main() {
    int marks[2][3]; // _ _ _|_ _ _
    marks[0][0]=90;
    marks[0][1]=56;
    marks[0][2]=4;
    marks[1][0]=23;
    marks[1][1]=9;
    marks[1][2]=18;
    printf("%d\n",marks[0][0]);
    printf("%d",marks[1][2]);
    return 0;
}