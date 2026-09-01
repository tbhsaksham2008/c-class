#include<stdio.h>
struct Employee{
    int id;
    char name[20];
    float salary;
};
int main(){
    struct Employee e1;
    printf("Enter employee id: ");
    scanf("%d", &e1.id);
    printf("Enter employee name: ");
    scanf("%s", e1.name);       
    printf("Enter employee salary: ");
    scanf("%f", &e1.salary);
    printf("Employee id: %d\n", e1.id);
    printf("Employee name: %s\n", e1.name);
    printf("Employee salary: %.2f\n", e1.salary);
}    