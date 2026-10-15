#include <stdio.h>

int main()
{
	char name[100];
	int age;
	float percentage;

	printf("Enter student's name: ");
	fgets(name, sizeof(name), stdin);

	printf("Enter student's age: ");
	scanf("%d", &age);

	printf("Enter student's percentage: ");
	scanf("%f", &percentage);

	printf("\nStudent Information\n");
	printf("Name       : %s", name);
	printf("Age        : %d\n", age);
	printf("Percentage : %.2f%%\n", percentage);

	return 0;
}
