/*
CH4-P4: String Basics

Goal:
Practice std::string operations.

Task:
- Ask the user for a single word.
- Print:
  - the word
  - its length
  - its first character
  - its last character

Concepts Practiced:
- std::string
- .length()
- indexing with [ ]
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
  string word;
  cout << "Enter a word: ";
  cin >> word;

  cout << "The word you entered is " << word << ".\n";
  cout << "That word has " << word.length() << " characters.\n";
  cout << "The first character is: " << word[0] << "\n";
  cout << "The last character is: " << word[word.length() - 1] << "\n";

  return 0;
}