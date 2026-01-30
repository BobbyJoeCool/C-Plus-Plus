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
#include <cmath>
using namespace std;

int solveQuadratic(const double eqn[], double roots[]);

int main()
{
    cout << "ax^2 + bx + c = 0.  Quadratic Equation Solver!\n";
    cout << "Enter values for a, b, and c:\n";
    cout << "a = ";
    double a;
    cin >> a;

    if (a == 0)
    {
        cout << "If 'a' is 0, it is a linear equation.";
        return 0;
    }

    cout << "b = ";
    double b;
    cin >> b;
    cout << "c = ";
    double c;
    cin >> c;

    double eqn[] = {a, b, c};
    double roots[] = {0,0};

    int rootCount = solveQuadratic(eqn, roots);

    cout << "Your equation has " << rootCount << " real roots.\n";

    switch (rootCount)
    {
    case 1:
        cout << "The root is " << roots[0] << endl;
        break;
    case 2:
        cout << "Those roots are " << roots[0] << " and " << roots[1] << endl;
        break;
    case 0:
        cout << "No real roots.";
    }
    return 0;
}

int solveQuadratic(const double eqn[], double roots[])
{
    double a = eqn[0];
    double b = eqn[1];
    double c = eqn[2];

    double discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        roots[0] = (-b + sqrt(discriminant)) / (2 * a);
        roots[1] = (-b - sqrt(discriminant)) / (2 * a);
        return 2;
    } else if (discriminant == 0) {
        roots[0] = -b / (2*a);
        return 1;
    } else {
        return 0;
    }
}