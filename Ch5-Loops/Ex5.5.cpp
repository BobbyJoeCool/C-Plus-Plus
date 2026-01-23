/*
CH5-P5: Sentinel-Controlled Sum

Goal:
Practice sentinel loops.

Task:
- Repeatedly ask the user to enter integers.
- Stop when they enter 0.
- Print the sum of all non-zero numbers entered.

Concepts Practiced:
- while loop
- sentinel value
- accumulators
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0)
    {
        sum += n;
        cout << "Enter an integer: ";
        cin >> n;
    }

    cout << "Thank you.  The sum of all the numbers you entered is: " << sum << ".\n";

    return 0;
}