/*
CH6-P1: Function Practice (Square)

Goal:
Write and call a simple function.

Task:
- Write: int square(int n)
- In main, read an int from the user and print its square.

Concepts Practiced:
- function definition
- return values
- calling functions
*/

#include <iostream>
using namespace std;

int square (int n) {
    return n * n;
}

int main () {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "The square of that number is " << square(n) << ".\n";

    return 0;
}