/*
CH3-P3: Largest of Three

Goal:
Practice compound conditions.

Task:
- Read three integers.
- Print the largest value.
- If there is a tie for largest, print "Tie".

Concepts Practiced:
- if/else logic
- && and ||
*/

#include <iostream>
using namespace std;

int main () {
    int a, b, c;

    cout << "Enter an integer A: ";
    cin >> a;
    cout << "Enter an integer B: "; 
    cin >> b;
    cout << "Enter an integer C: ";
    cin >> c;

    if (a > b && a > c) {
        cout << "Integer A: " << a << " is the largest of the three.\n";
    } else if (b > a && b > c) {
        cout << "Integer B: " << b << " is the largest of the three.\n";
    } else if (c > a && c > b) {
        cout << "Integer C: " << c << " is the largest of the three.\n";
    } else if (a == b && a > c) {
        cout << "Integers A & B: " << a << " are tied for the largest of the three.\n";
    } else if (a == c && a > b) {
        cout << "Integers A & C: " << a << " are tied for the largest of the three.\n";
    } else if (c == b && c > a) {
        cout << "Integers B & C: " << b << " are tied for the largest of the three.\n";
    } else if (a == b && a == c) {
        cout << "Integers A, B, & C: " << a << " are all the same value.\n";
    }

    return 0;
}