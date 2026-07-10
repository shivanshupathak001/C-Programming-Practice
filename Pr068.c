//Program 68 (10th July 2026)
//WAP to create a function that will reverse an array and another function that will print it using call by reference
#include<stdio.h>
void reverse(int arr[],int n);
void printArr(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5};
    reverse(arr,5);
    printArr(arr,5);
    return 0;
}
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstVal=arr[i];
        int secondVal=arr[n-i-1];
        arr[i]=secondVal;
        arr[n-i-1]=firstVal;
    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}