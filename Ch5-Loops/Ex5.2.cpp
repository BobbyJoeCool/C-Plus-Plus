/*
CH5-P2: Sum 1..n

Goal:
Practice accumulation.

Task:
- Ask the user for n.
- Compute the sum of numbers from 1 to n.
- Print the sum.

Concepts Practiced:
- for loop
- accumulator variable
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int sum = 0;
    if (n>0) {
        for (int i = 1; i <= n; i ++) {
            sum += i;
        }
        cout << "The sum of the first " << n << " whole numbers is " << sum << ".\n";
    }
    else {
        cout << "Invalid Input.\n";
    }

    return 0;
}