//Program 71 (12th July 2026)
//WAP to create a 2D array and store the table of 2 and 3 there in the array
#include<stdio.h>
void StoreTable(int arr[][10],int n,int m,int number);
int main() {
    int tables[2][10];
    StoreTable(tables,0,10,2);
    StoreTable(tables,1,10,3);
    for(int i=0;i<10;i++){
        printf("%d\t",tables[0][i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d\t",tables[1][i]);
    }
    printf("\n");
}
void StoreTable(int arr[][10],int n,int m,int number){
    for(int i=0;i<m;i++){
        arr[n][i]=number*(i+1);
    }
}