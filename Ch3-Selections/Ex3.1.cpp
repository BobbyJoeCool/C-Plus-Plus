/*
CH3-P1: Even or Odd

Goal:
Practice basic if/else.

Task:
- Read an integer from the user.
- Print whether it is even or odd.

Hint:
- Use n % 2 == 0

Concepts Practiced:
- if/else
- modulo operator
*/

#include <iostream>
using namespace std;

int main () {
    int input;

    cout << "Enter an Integer: ";
    cin >> input;

    if (input % 2 == 0)
    {
        cout << input << " is even.\n";
    } else {
        cout << input << " is odd.\n";
    }
    
}