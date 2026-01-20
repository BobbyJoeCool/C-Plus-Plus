/*
CH3-P4: Simple Menu with switch

Goal:
Practice switch statements.

Task:
- Display a menu:
  1) Rock
  2) Paper
  3) Scissors
- Read the user's choice.
- Print the word that matches the number.
- If invalid, print "Invalid choice".

Concepts Practiced:
- switch/case/default
- break
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
  int selection;

  cout << "Enter your choice from the menu below:\n";
  cout << "1) Rock\n";
  cout << "2) Paper\n";
  cout << "3) Scissors\n";
  cin >> selection;

  switch (selection) {
    case 1:
    
      cout << "You selected Rock.\n";
      break;
    case 2:

      cout << "You selected Paper.\n";
      break;

    case 3:
      cout << "You selected Scissors.\n";
      break;

    default:
      cout << "Invalid selection.\n";
      break;
  }

  return 0;
}