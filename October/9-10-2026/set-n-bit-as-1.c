#include <stdio.h>

int main() {
    int num, n;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &n);

    num = num | (1 << n);

    printf("Number after setting %d bit to 1 = %d", n, num);

    return 0;
}