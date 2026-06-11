// WAP to print days on the basis of numbers ( switch case )
#include<stdio.h>
int main() {
    int day ;
    printf("1--Sunday , 2--Monday , 3--Tuesday , 4--Wednesday , 5--Thursday , 6--Friday , 7--Saturday \n");
    printf("Enter Your Day Number \n");
    scanf("%d",&day);
    switch(day) {
        case 1: printf("Sunday \n");
        break;
        case 2: printf("Monday \n");
        break;
        case 3: printf("Tuesday \n");
        break;
        case 4: printf("Wednesday \n");
        break;
        case 5: printf("Thursday \n");
        break;
        case 6: printf("Friday \n");
        break;
        case 7: printf("Saturday \n");
        break;
        default: printf("Not a valid day \n");
    }
    return 0;
}