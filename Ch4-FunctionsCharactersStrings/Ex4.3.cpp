/*
CH4-P3: Character Classifier

Goal:
Practice char and <cctype> functions.

Task:
- Ask the user to enter a single character.
- Print whether it is:
  - letter
  - digit
  - whitespace
  - other

Concepts Practiced:
- char input
- std::isalpha, std::isdigit, std::isspace
*/

#include <iostream>
#include <cctype>
using namespace std;

int main () {
  char input;
  cout << "Enter a character: ";
  cin.get(input);

  if (isalpha(input)) {
    cout << "The character is a letter.\n";
  }
  else if (isdigit(input)) {
    cout << "The character is a number.\n";
  }
  else if (isspace(input)) {
    cout << "The character is a whitespace.\n";
  }
  else {
    cout << "The character is other.\n";
  }
  return 0;
}
