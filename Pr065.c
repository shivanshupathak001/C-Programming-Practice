//Program 65 (9th July 2026)
//WAP for travel in an array given by the user (Traverse an Array)
#include<stdio.h>
int main() {
    int aadhaar[5];
    int *ptr=&aadhaar[0]; //int *ptr = aadhaar; also work
    for(int i=0;i<5;i++){
        printf("%d index:",i);
        scanf("%d",(ptr+i)); //scanf("%d",&aadhaar[i]); also work
    }
    printf("Array Elements :-\n");
    for(int i=0;i<5;i++){
        printf("%d index: %d\n",i,*(ptr+i)); //printf("%d index: %d",i,aadhaar[i]); also work
    }
    return 0;
}