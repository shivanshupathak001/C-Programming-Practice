//Program 64 (8th July 2026)
//WAP to print the largest number in an array given by the user
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array :-\n ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements :-\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest element in the array is %d\n", largest);
    return 0;
}