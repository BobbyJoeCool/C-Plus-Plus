/*
CH2-P1: Variables and Expressions

Goal:
Practice declaring variables and using arithmetic.

Task:
- Create variables:
  - int a = 12;
  - int b = 5;
- Print:
  - a + b
  - a - b
  - a * b
  - a / b (integer division)
  - a % b

Concepts Practiced:
- int variables
- Arithmetic operators + - * / %
- Understanding integer division
*/

#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 5;

    cout << a << " + " << b << " = " << a + b << "\n";
    cout << a << " - " << b << " = " << a - b << "\n";
    cout << a << " * " << b << " = " << a * b << "\n";
    cout << a << " / " << b << " = " << a / b << "\n";
    cout << a << " % " << b << " = " << a % b << "\n";

    return 0;
}