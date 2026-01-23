/*
CH4-P2: Circle Calculator

Goal:
Practice math formulas with double.

Task:
- Ask for radius (double).
- Compute and print:
  - circumference = 2 * pi * r
  - area = pi * r * r
- Use pi = 3.141592653589793

Concepts Practiced:
- doubles
- arithmetic expressions
- constants
*/

#include <iostream>
using namespace std;

int main () {
  double radius;
  const double PI = 3.141592653589793;

  cout << "Enter a radius: ";
  cin >> radius;

  double circumference = 2 * PI * radius;
  double area = PI * radius * radius;

  cout << "For a circle with a radius of: " << radius << ":\n";
  cout << "Circumference = " << circumference << "\n";
  cout << "Area = " << area << "\n";

  return 0;
}