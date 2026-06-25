#include <iostream>
using namespace std;
double convertCelsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
double convertFahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}
double convertCelsiusToKelvin(double celsius) {
    return celsius + 273.15;
}
double convertKelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

int main() {
    double celsiusInput, fahrenheitInput, kelvinInput;

    cout << "Enter temperature in Celsius: "; cin >> celsiusInput;
    cout << "Fahrenheit: " << convertCelsiusToFahrenheit(celsiusInput) << endl;
    cout << "Kelvin: " << convertCelsiusToKelvin(celsiusInput) << endl;

    cout << "Enter temperature in Fahrenheit: "; cin >> fahrenheitInput;
    cout << "Celsius: " << convertFahrenheitToCelsius(fahrenheitInput) << endl;

    cout << "Enter temperature in Kelvin: "; cin >> kelvinInput;
    cout << "Celsius: " << convertKelvinToCelsius(kelvinInput) << endl;
    return 0;
}
