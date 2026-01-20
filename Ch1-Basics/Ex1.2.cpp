/*
CH1-P2: Output Formatting Practice

Goal:
Practice printing multiple lines and controlling spacing.

Task:
- Print a small “profile card” using only output statements.
  Include:
  - Name
  - Favorite food
  - Favorite hobby
- Make the output readable using newlines and labels.

Concepts Practiced:
- std::cout
- \n vs std::endl
- Basic program structure
*/

#include <iostream>
using namespace std;

int main() {
  cout << "Name:            Robert Breutzmann \n";
  cout << "Favorite Food:   Lasagna \n";
  cout << "Favorite Hobby:  World-Building";
  return 0;
}