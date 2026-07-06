//Program 60 (6th July 2026)
//WAP to print all the Letters in English Alphabet using a Pointer
#include<stdio.h>
int main() {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *ptr = alphabet;
    printf("English Alphabet:\n");
    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }
    return 0;
}