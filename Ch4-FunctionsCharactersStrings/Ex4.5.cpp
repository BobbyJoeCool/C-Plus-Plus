/*
CH4-P5: Simple Password Rules

Goal:
Practice strings + selections.

Task:
- Ask the user to enter a password (single word).
- Check and print whether it:
  - has length at least 8
  - starts with a letter
  - ends with a digit
- Print "Valid" only if all rules pass; otherwise print "Invalid".

Concepts Practiced:
- std::string indexing
- conditional logic
- character tests
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main () {
  string password;
  cout << "Your password must have: \nAt least 8 characters. \nStart with a letter. \nEnd with a digit.\n";
  cout << "Enter your password: ";
  cin >> password;

  bool length = password.length() >= 8;
  bool start = isalpha(password[0]);
  bool end = isdigit(password[password.length()-1]);

  if (length && start && end) {
    cout << "Valid Password.\n";
  }
  else {
    cout << "Invalid Password.\n";
  }

  return 0;
}