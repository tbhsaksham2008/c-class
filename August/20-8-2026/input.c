#include <stdio.h>
int main(){
    int number;
    int secnumber;
    printf("enter first number:- ");
    scanf(" %d",&number);
    printf("enter second number:- ");
    scanf("%d",&secnumber);
    int sum = number + secnumber;
    printf("sum is:- %d",sum);
}