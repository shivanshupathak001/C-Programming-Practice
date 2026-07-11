//Program 70 (11th July 2026)
//WAP to insert an element at the end of an array
#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of elements :- \n");
    scanf("%d",&n);
    int arr[n + 1];
    printf("Enter %d elements:\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert :- \n");
    scanf("%d",&arr[n]); 
    printf("Array after insertion :- \n");
    for (int i = 0; i <= n; i++) {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    return 0;
}