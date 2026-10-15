#include <stdio.h>
int main() {
    int a;
    printf("Enter the number of days : ");
    scanf("%d", &a);
    int years = a / 365;
    printf("Years : %d,Weeks : %d,Days left : %d", 365 - years * 365, (a % 365) / 7, (a % 365) % 7);

}