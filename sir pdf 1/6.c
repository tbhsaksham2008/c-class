#include <stdio.h>

int main()
{
	char gender;

	printf("Enter your gender (M/F): ");
	gender = getchar();

	printf("You entered: ");
	putchar(gender);
	putchar('\n');

	return 0;
}
