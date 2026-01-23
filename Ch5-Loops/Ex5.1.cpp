/*
CH5-P1: Count Up

Goal:
Practice a basic for loop.

Task:
- Ask the user for a positive integer n.
- Print numbers from 1 to n on one line.

Concepts Practiced:
- for loop
- loop counters
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
    }
    else {
        cout << "Invalid Input.";
    }
    cout << "\n";

    return 0;
}