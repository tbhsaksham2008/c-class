#include <stdio.h>

int main() {
    char number[10];
    int count = 0;

    while (count < 10) {
        printf("Enter number: ");
        scanf("%s", number);

        printf("My number is %s\n", number);

        count++;
    }

    return 0;
}