#include <stdio.h>

int main(void)
{
	long long accountNumber;
	double withdrawalAmount;

	printf("Enter account number: ");
	scanf("%lld", &accountNumber);

	printf("Enter withdrawal amount: ");
	scanf("%lf", &withdrawalAmount);

	printf("\nTransaction Details\n");
	printf("Account Number: %lld\n", accountNumber);
	printf("Withdrawal Amount: %.2f\n", withdrawalAmount);

	return 0;
}
