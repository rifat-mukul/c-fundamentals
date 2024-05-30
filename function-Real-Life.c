// Function to convert Fahrenheit to Celsius

#include<stdio.h>

float toCelsius(float farenheit) {
    return (5.0 / 9.0) * (farenheit - 32.0);
}

int main() {
    float f_value;
    printf("Enter the temparature in Farenheit : ");
    scanf("%f", &f_value);
    float result = toCelsius(f_value);

    printf("farenheit : %.2f\n", f_value);
    printf("Convert Fahrenheit to celsius : %.2f\n", result);
    return 0;
}