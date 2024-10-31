#include <iostream>
using namespace std;

int main() {
    // Declare variables
    float temperature_celsius;
    float temperature_fahrenheit;
    float temperature_kelvin;

    // Ask user to input temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> temperature_celsius;

    // Convert Celsius to Fahrenheit
    temperature_fahrenheit = (temperature_celsius * 9/5) + 32;
    
    // Convert Celsius to Kelvin
    temperature_kelvin = temperature_celsius + 273.15;
    
    // Display the converted temperatures
    cout << "Temperature in Fahrenheit: " << temperature_fahrenheit << " degrees Fahrenheit" << endl;
    cout << "Temperature in Kelvin: " << temperature_kelvin << " degrees Kelvin" << endl;
    
    return 0;
}