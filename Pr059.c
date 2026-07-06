//Program 59 (6th July 2026)
//WAP to print the Elements of an Array given by the user in Reverse order
#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of an Array :-\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements of an Array :-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your Entered Array is :-\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("Reversed Array of your given Array is :-\n");
    for(int j=n-1;j>=0;j--){
        printf("%d\t",arr[j]);
    }
    return 0;
}