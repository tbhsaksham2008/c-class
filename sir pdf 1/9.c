#include <stdio.h>

int main()
{
	char productName[100];
	double originalPrice, discountPercentage;
	double discountAmount, finalPrice;

	printf("Enter product name: ");
	scanf(" %99[^\n]", productName);

	printf("Enter original price: ");
	scanf("%lf", &originalPrice);

	printf("Enter discount percentage: ");
	scanf("%lf", &discountPercentage);

	discountAmount = originalPrice * discountPercentage / 100.0;
	finalPrice = originalPrice - discountAmount;

	printf("\nProduct: %s\n", productName);
	printf("Discount amount: %.2f\n", discountAmount);
	printf("Final price: %.2f\n", finalPrice);

	return 0;
}
