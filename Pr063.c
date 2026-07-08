//Program 63 (8th July 2026)
//WAP to find how many times does a number 'x' given by the user occurs in an array of numbers taken by the user
#include <stdio.h>
int main() {
    int n , x , count = 0;
    printf("Enter the size of the array :-\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements :-\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("%d occurs %d time(s) in the array.\n", x, count);
    return 0;
}