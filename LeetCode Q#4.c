#include <stdio.h>

int main() {
    double celsius;
    
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    double kelvin = celsius + 273.15;
    double fahrenheit = celsius * 1.80 + 32.00;

    printf("[%.5lf,%.5lf]\n", kelvin, fahrenheit);

    return 0;
}

