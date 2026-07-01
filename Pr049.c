//Program 49 (1st July 2026)
//WAF to print "Hot" and "Cold" depends on the temperature user enters
#include<stdio.h>
int temp_check(int t);
int main() {
    float t;
    printf("Enter Temperature of your meal \n");
    scanf("%f",&t);
    temp_check(t);
    return 0;
}
int temp_check(int t){
    if(t<20){
        printf("Your Meal is Cold \n");
    }
    else if(t>=20){
        printf("Your Meal is Hot \n");
    }
}