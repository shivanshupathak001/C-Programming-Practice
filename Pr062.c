//Program 62 (7th July 2026)\
//WAP to compare and do some basic operations between two Pointers
#include <stdio.h>
int main() {
    int age = 22;
    int _age = 23;

    int *ptr = &age;
    int *_ptr = &_age;

    printf("The age is %d\n", *ptr);
    printf("The age is stored at %p\n", (void *)ptr);

    printf("The _age is %d\n", *_ptr);
    printf("The _age is stored at %p\n", (void *)_ptr);
    _ptr = &age;
    printf("Comparison = %d\n", ptr == _ptr);
    return 0;
}