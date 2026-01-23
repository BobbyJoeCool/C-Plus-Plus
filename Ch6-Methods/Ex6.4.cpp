/*
CH6-PX2: Palindromic Primes

Goal:
Practice number analysis using functions and loops.

------------------------------------------------------------
Definition
------------------------------------------------------------

A palindromic number reads the same forwards and backwards.
A palindromic PRIME is a number that is both:
- prime
- palindromic

Examples:
    2, 3, 5, 7, 11, 101, 131

------------------------------------------------------------
Program Requirements
------------------------------------------------------------

Your program must:
- Ask the user for an upper limit
- Check every number from 2 up to that limit
- Determine whether each number is:
    a) prime
    b) palindromic
- Print ONLY numbers that satisfy BOTH conditions

------------------------------------------------------------
Required Functions (Suggested)
------------------------------------------------------------

- bool isPrime(int n)
    - Returns true if n is prime, false otherwise

- bool isPalindrome(int n)
    - Returns true if the number reads the same forwards and backwards

------------------------------------------------------------
Rules
------------------------------------------------------------

- Use loops for repetition
- Use functions for logic (main should coordinate)
- Do NOT use global variables
- Output must be clear and readable

------------------------------------------------------------
Optional Enhancements
------------------------------------------------------------

- Count how many palindromic primes were found
- Print results 10 to a line with tab spacing
- Optimize prime checking (stop at sqrt(n))

*/

#include <iostream>
#include <string>
using namespace std;

bool isPrime(long n);
bool isPalindrome(long p);

int main()
{
    int max;
    cout << "Enter a number of primes to find: ";
    cin >> max;

    int count = 0;
    long i = 2;

    while (count < max) {
        if (isPrime(i) && isPalindrome(i)) {
            cout << i << "\t";
            count ++;
            if (count % 10 == 0) {
                cout << "\n";
            }
        }
        i++;
    }

    return 0;
}

bool isPrime(long n) {
    if (n < 2) {
        return false;
    }
    for (long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPalindrome(long p) {
    string number = to_string(p);

    int left = 0;
    int right = number.length() - 1;

    while (left < right) {
        if (number[left] != number[right]) {
            return false;
        }
        left ++;
        right --;
    }
    return true;
}