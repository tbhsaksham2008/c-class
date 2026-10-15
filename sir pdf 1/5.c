#include <stdio.h>
int main()
{
    char name[100];
    double basicSalary, hra, da, grossSalary;

    printf("Enter employee name: ");
    scanf("%99[^\n]", name);

    printf("Enter basic salary: ");
    scanf("%lf", &basicSalary);
    printf("Enter HRA: ");
    scanf("%lf", &hra);
    printf("Enter DA: ");
    scanf("%lf", &da);

    grossSalary = basicSalary + hra + da;

    printf("\nEmployee Name: %s\n", name);
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}