#include <stdio.h>
int main(){
	char fullName[100], course[100];
	int rollNumber, age;

    printf("\nStudent Registration Form\n");
	printf("Enter full name: ");
	scanf(" %99[^\n]", fullName);
	printf("Enter roll number: ");
	scanf("%d", &rollNumber);
	printf("Enter age: ");
	scanf("%d", &age);
	printf("Enter course: ");
	scanf(" %99[^\n]", course);

	printf("\nRegistration Summary\n");
	printf("Full Name: %s\n", fullName);
	printf("Roll Number: %d\n", rollNumber);
	printf("Age: %d\n", age);
	printf("Course: %s\n", course);

	return 0;

}