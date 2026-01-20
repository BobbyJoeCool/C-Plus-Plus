/*
CH2-P2: User Input Basics

Goal:
Practice reading user input and displaying results.

Task:
- Ask the user for:
  - Their first name (single word)
  - Their age (int)
- Print a full sentence using both values.

Example:
"Bob is 34 years old."

Concepts Practiced:
- std::cin
- std::string
- Output with mixed text + variables
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
    int age;
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << name << ", you are " << age << " years old. \n";
}