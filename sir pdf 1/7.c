#include <stdio.h>

int main()
{
	char feedback[500];

	printf("Enter your feedback: ");
	fgets(feedback, sizeof(feedback), stdin);
	printf("Your feedback: %s", feedback);

	return 0;
}
