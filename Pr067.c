//Program 67 (10th July 2026)
//WAP to create a function that counts the amount of odd numbers upto a particular index in an array given by the user
#include<stdio.h>
int countOdd (int arr[] , int n);
int main() {
    int arr[10];
    printf("Enter 10 Elements :- \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Amount of Odd Numbers in the first 8 Elements :- %d",countOdd(arr,8));
    return 0;
}
int countOdd (int arr[] , int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}