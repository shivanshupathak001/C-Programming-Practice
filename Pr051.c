//Program 51 (2nd July 2026)
//WAP to print the value of a variable 'i' from its pointer to pointer
#include<stdio.h>
int main() {
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("i= %d\n",i);
    printf("Address of i= %p\n",(void*)ptr);
    printf("*ptr= %d\n",*ptr);
    printf("Address of ptr= %p\n",(void*)pptr);
    printf("**pptr= %d\n",**pptr);
    return 0;
}