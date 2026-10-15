#include <stdio.h>
int main(){
    float principle ,roi ,time ;

    printf("Enter principle amount : ");
    scanf("%f",&principle);

    printf("Enter rate of interest : ");
    scanf("%f",&roi);

    printf("Enter time in years : ");
    scanf("%f",&time);

    float simple_interest = (principle * roi * time) / 100;
    printf("Simple Interest = %.2f\n", simple_interest);

    float total_amount = principle + simple_interest;
    printf("Total Amount = %.2f\n", total_amount);

    return 0;
}