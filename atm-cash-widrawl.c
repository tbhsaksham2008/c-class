#include <stdio.h>

int main() {
    int pin;
    int code;
    int amount;
    int notes;

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    printf("Enter your code: ");
    scanf("%d", &code);

    if (pin == 1234 && code == 5678) {

        printf("Enter the amount to withdraw: ");
        scanf("%d", &amount);

        printf("Withdrawal successful! Amount withdrawn: %d\n", amount);

        notes = amount / 500;
        amount = amount % 500;
        printf("Number of 500 notes: %d\n", notes);

        notes = amount / 200;
        amount = amount % 200;
        printf("Number of 200 notes: %d\n", notes);

        notes = amount / 100;
        amount = amount % 100;
        printf("Number of 100 notes: %d\n", notes);

        notes = amount / 50;
        amount = amount % 50;
        printf("Number of 50 notes: %d\n", notes);

        notes = amount / 10;
        amount = amount % 10;
        printf("Number of 10 notes: %d\n", notes);
    }
    else {
        printf("Invalid PIN or code. Transaction failed.\n");
    }

    return 0;
}