#include <stdio.h>
#define PI 3.14
int main() {
    float r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    float area=PI*r*r;
    printf("Area of circle is = %f",area);
}