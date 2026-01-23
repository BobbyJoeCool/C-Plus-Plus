/*
CH5-P3: Multiplication Table

Goal:
Practice nested loops.

Task:
- Ask the user for a number n (1–12).
- Print the multiplication table row:
  n x 1 = ...
  ...
  n x 12 = ...

Concepts Practiced:
- loops
- repeated output formatting
*/

#include <iostream>
using namespace std;

int main () {
  int n;
  cout << "Enter an integer from 1-12: ";
  cin >> n;

  if (n >= 1 && n <= 12) {
    for (int i = 1; i <= 12; i ++) {
      cout << n << " * " << i << " = " << n*i << "\n";
    }
  }
  else {
    cout << "Invalid input.\n";
  }

  return 0;
}