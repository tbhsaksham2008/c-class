#include <stdio.h>
// teacher enter marks of 3 subjects and calculate total and average marks.

int main() {

    float eng;
    float maths;
    float cs;

    printf("Enter Marks Of English: ");
    scanf("%f", &eng);

    printf("Enter Marks Of Maths: ");
    scanf("%f", &maths);

    printf("Enter Marks Of Computer Science: ");
    scanf("%f", &cs);

    float total = eng + maths + cs;

    printf("Total marks are: %.2f\n", total);

    float avg = total / 3;

    printf("Average marks are: %.2f\n", avg);

    return 0;
}