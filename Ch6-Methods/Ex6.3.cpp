/*
CH6-PX3: Mersenne Primes

Goal:
Practice functions, loops, and prime testing.

------------------------------------------------------------
Definition
------------------------------------------------------------

A Mersenne number has the form:
    M = 2^p - 1

A Mersenne PRIME is a Mersenne number that is also prime.

Examples:
    p = 2  →  3   (prime)
    p = 3  →  7   (prime)
    p = 4  →  15  (not prime)

------------------------------------------------------------
Program Requirements
------------------------------------------------------------

Your program must:
- Ask the user for an upper limit for p
- Generate Mersenne numbers using the formula (2^p - 1)
- Test whether each generated number is prime
- Print ONLY the Mersenne numbers that are prime

------------------------------------------------------------
Required Functions (Suggested)
------------------------------------------------------------

- bool isPrime(int n)
    - Returns true if n is prime, false otherwise

- int mersenneNumber(int p)
    - Returns the value (2^p - 1)

------------------------------------------------------------
Rules
------------------------------------------------------------

- Use loops where appropriate
- Use functions (no large logic blocks inside main)
- Do NOT use global variables
- Output should be clear and readable

------------------------------------------------------------
Optional Enhancements
------------------------------------------------------------

- Print the value of p alongside the Mersenne prime
- Count how many Mersenne primes were found
- Stop early if numbers exceed int limits

*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime (int n);
int mersenneNumber(int p);

int main() {
    int max;
    cout << "Enter a number to stop at (31 or less): ";
    cin >> max;

    cout << "p\t" << "(2^p - 1)\n";
    cout << "------------------\n";
    for (int p = 2; p <= max; p++) {
        int mersenneN = mersenneNumber(p);
        if (isPrime(mersenneN)) {
            cout << p << "\t" << mersenneN << "\n";
        }
    }

    return 0;
}

bool isPrime (int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int mersenneNumber(int p) {
    int mersenneNumber = static_cast<int>(pow(2, p) - 1);
    return mersenneNumber;
}