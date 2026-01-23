/*
CH6-P2: Even/Odd Function

Goal:
Write a boolean function.

Task:
- Write: bool isEven(int n)
- In main, read a number and print "Even" or "Odd" using the function.

Concepts Practiced:
- bool return type
- function calls in conditionals
*/

#include <iostream>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

int main () {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (isEven(n)) {
        cout << "That number is even.\n";
    }
    else {
        cout << "That number is odd.\n";
    }
    
    return 0;
}