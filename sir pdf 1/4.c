// 4. Temperature Conversion A weather application receives temperature in Celsius but needs to display it in Fahrenheit. Input the temperature in Celsius and display the equivalent Fahrenheit temperature. Use the formula: F = (C × 9 / 5) + 32.
 #include<stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}
