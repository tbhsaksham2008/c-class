#include <stdio.h>

int main()
{
	float english, mathematics, computer_science;
	float total, average;

	printf("Enter marks for English: ");
	scanf("%f", &english);

	printf("Enter marks for Mathematics: ");
	scanf("%f", &mathematics);

	printf("Enter marks for Computer Science: ");
	scanf("%f", &computer_science);

	total = english + mathematics + computer_science;
	average = total / 3.0f;

	printf("Total marks: %.2f\n", total);
	printf("Average marks: %.2f\n", average);

	return 0;
}
