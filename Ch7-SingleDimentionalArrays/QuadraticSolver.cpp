/*
Algebra: Solving Quadratic Equations

Write a function to solve a quadratic equation using the following prototype:

int solveQuadratic(const double eqn[], double roots[]);

DESCRIPTION:
The coefficients of the quadratic equation

    a*x^2 + b*x + c = 0

are stored in the array `eqn` as follows:
    eqn[0] = a
    eqn[1] = b
    eqn[2] = c

The function computes the real roots (if any) and stores them in the array `roots`.

RETURN VALUE:
- Return 0 if there are no real roots
- Return 1 if there is exactly one real root
- Return 2 if there are two distinct real roots

ROOT STORAGE:
- If one real root exists, store it in roots[0]
- If two real roots exist, store them in roots[0] and roots[1]

Write a test program that:
1) Prompts the user to enter values for coefficients a, b, and c
2) Stores the coefficients in the eqn array
3) Calls solveQuadratic()
4) Displays:
   - The number of real roots
   - Each real root (if any), clearly labeled

RULES:
- Do NOT use global variables
- Use arrays (not structs or classes)
- Use functions to separate logic from main()
- Use <cmath> for mathematical operations (e.g., sqrt)
- Output must be clear and easy to read
*/

#include <iostream>
using namespace std;


int main()
{
    // TODO: Implement the program here
    return 0;
}