/*
CH5-P4: Input Validation Loop

Goal:
Practice repeating until valid input is received.

Task:
- Keep asking the user for an integer between 1 and 10.
- Stop only when they enter a valid number.
- Then print "Thank you."

Concepts Practiced:
- while loop or do-while loop
- validation logic
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    do {
        cout << "Enter an integer: ";
        cin >> n;
    } while (n < 1 || n > 10);
    
    cout << "Thank you.\n";
    return 0;
}