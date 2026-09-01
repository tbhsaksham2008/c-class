#include<stdio.h>

struct Student{
    int id;
    char name[20];
    float marks;
};

int main(){

    struct Student s1;
    printf("Enter student id: ");
    scanf("%d", &s1.id);
    printf("Enter student name: ");
    scanf("%s", s1.name);
    printf("Enter student marks: ");
    scanf("%f", &s1.marks);
    printf("Student id: %d\n", s1.id);
    printf("Student name: %s\n", s1.name);
    printf("Student marks: %.2f\n", s1.marks);

}