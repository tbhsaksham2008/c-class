#include <stdio.h>

int main()
{
	char productName[100];
	int quantity;
	double pricePerItem;

	printf("Enter product name: ");
	fgets(productName, sizeof(productName), stdin);

	printf("Enter quantity: ");
	scanf("%d", &quantity);

	printf("Enter price per item: ");
	scanf("%lf", &pricePerItem);

	printf("Total bill amount: %.2f\n", quantity * pricePerItem);

	return 0;
}
