/*
ASSIGNMENT 3 (Moderate) — Minesweeper Numbers (2D char + derived 2D int)

BACKGROUND:
In Minesweeper, a '*' represents a mine. Every non-mine cell contains a number indicating
how many mines are in its 8 neighboring cells (up, down, left, right, and diagonals).

GOAL:
Write a C++ program that:
1) Prompts the user for rows r and columns c.
2) Reads an r x c board of characters containing only:
   - '*' for mine
   - '.' for empty
3) Builds an output board where:
   - Mines stay as '*'
   - Every '.' becomes a digit character '0'..'8' based on adjacent mine count
4) Prints the resulting board in the same r x c grid format.

INPUT EXAMPLE:
Enter rows and cols: 4 5
Enter the board (use * and .):
* . . . .
. . * . .
. . . . .
. * . . .

OUTPUT EXAMPLE:
* 2 1 1 0
2 2 * 1 0
1 2 1 1 0
1 * 1 0 0

REQUIREMENTS:
- Use a 2D array OR vector<vector<char>> for the input.
- Use nested loops.
- Carefully handle boundaries (don’t read outside the array).
- Adjacent includes diagonals (8 directions).

HINT:
Use two loops for directions:
for dr in {-1,0,1}
for dc in {-1,0,1}
skip (0,0)
check bounds
*/

#include <iostream>
using namespace std;

int main()
{
    // TODO: Implement the program.
    return 0;
}
