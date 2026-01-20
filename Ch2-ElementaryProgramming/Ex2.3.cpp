/*
CH2-P3: Unit Conversion

Goal:
Practice using double and a simple formula.

Task:
- Ask the user for a temperature in Celsius (double).
- Convert to Fahrenheit using:
  F = (9.0 / 5.0) * C + 32
- Print the result with a clear label.

Concepts Practiced:
- double variables
- Arithmetic with doubles
- Console input/output
*/

#include <iostream>
using namespace std;

int main () {
    double celsius, fahrenheit;
    cout << "Enter a temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    cout << celsius << "° Celsius is " << fahrenheit << "° Fahrenheit.\n";

    return 0;
}