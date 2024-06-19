#include <stdio.h>

// Function prototypes
void convertTemperature(double temp, char originalUnit);
double celsiusToFahrenheit(double celsius);
double celsiusToKelvin(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToCelsius(double kelvin);
double kelvinToFahrenheit(double kelvin);

int main() {
    double temperature;
    char unit;

    // Prompt user to enter temperature and original unit
    printf("Enter temperature value: ");
    scanf("%lf", &temperature);
    printf("Enter original unit (C, F, or K): ");
    scanf(" %c", &unit);

    // Convert the temperature based on the original unit
    convertTemperature(temperature, unit);

    return 0;
}

// Function to convert temperature to other units and display the results
void convertTemperature(double temp, char originalUnit) {
    double result1, result2;

    switch(originalUnit) {
        case 'C':
        case 'c':
            printf("\n%.2f Celsius is equivalent to:\n", temp);
            printf("%.2f Fahrenheit\n", celsiusToFahrenheit(temp));
            printf("%.2f Kelvin\n", celsiusToKelvin(temp));
            break;
        case 'F':
        case 'f':
            printf("\n%.2f Fahrenheit is equivalent to:\n", temp);
            printf("%.2f Celsius\n", fahrenheitToCelsius(temp));
            printf("%.2f Kelvin\n", fahrenheitToKelvin(temp));
            break;
        case 'K':
        case 'k':
            printf("\n%.2f Kelvin is equivalent to:\n", temp);
            printf("%.2f Celsius\n", kelvinToCelsius(temp));
            printf("%.2f Fahrenheit\n", kelvinToFahrenheit(temp));
            break;
        default:
            printf("Invalid unit entered. Please enter C, F, or K.\n");
            return;
    }
}

// Conversion functions
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0/9.0;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5.0/9.0;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return kelvin * 9.0/5.0 - 459.67;
}