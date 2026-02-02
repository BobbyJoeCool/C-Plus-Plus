/*
ASSIGNMENT 2 (Moderate) — Saddle Point Finder (2D int array)

BACKGROUND:
A saddle point in a matrix is an element that is:
- The smallest value in its row
AND
- The largest value in its column
(Some definitions swap these; use the definition above for this assignment.)

GOAL:
Write a C++ program that:
1) Prompts the user for rows r and columns c.
2) Reads an r x c matrix of integers.
3) Finds ALL saddle points (there can be multiple).
4) Prints each saddle point’s value and its position (row, col).
   If none exist, print "No saddle points found."

INPUT EXAMPLE:
Enter rows and cols: 3 4
Enter the matrix:
3  1  9  8
7  5  2  6
4  0  3  1

OUTPUT EXAMPLE:
Saddle point at (row=1, col=2) value=2
(or "No saddle points found.")

REQUIREMENTS:
- Use a 2D array OR vector<vector<int>>.
- Use nested loops.
- You must compare values within a row and within a column.
- Indices may be 0-based or 1-based, but be consistent.

HINT:
For each cell (i, j):
- Check if it is the minimum in row i
- Check if it is the maximum in column j
*/

#include <iostream>
using namespace std;

int main()
{
    // TODO: Implement the program.
    return 0;
}