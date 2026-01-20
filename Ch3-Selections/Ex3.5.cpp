/*
CH3-P5: Input Validation (Range Check)

Goal:
Practice validating user input.

Task:
- Ask the user for an integer between 1 and 10.
- If it is out of range, print an error message.
- If it is valid, print "Accepted".

Concepts Practiced:
- boolean logic
- input validation with if/else
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter an integer between 1 and 10: ";
    cin >> n;

    if (n >= 1 && n <= 10) {
        cout << "Input Accepted.\n";
    } else {
        cout << "Invalid Input.\n";
    }

    return 0;
}