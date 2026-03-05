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
#include <string>
#include <vector>
#include <random>
#include <cstddef>
using namespace std;

int randInt(int min, int max)
{
   static mt19937 gen{random_device{}()};
   uniform_int_distribution<> dist(min, max);
   return dist(gen);
}

class Mineboard {
public:
   Mineboard(int row, int col, int minePercent)
   {
      this->rows = row;
      this->cols = col;
      this->minePercent = minePercent;
      initializeBoard();
   }

   Mineboard(int row, int col)
   {
      this->rows = row;
      this->cols = col;
      this->minePercent = 15;
      initializeBoard();
   }

   int checkAdjMines(int row, int col)
   {
      if (board[static_cast<size_t>(row)][static_cast<size_t>(col)] == '*')
      {
         return -1;  // Returns -1 if the square is a mine.
      }

      int mineCount = 0;
      int dr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
      int dc[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

      for (int i = 0; i < 8; i++)
      {
         int adjRow = row + dr[i];
         int adjCol = col + dc[i];
         if (validCoord(adjRow, adjCol))
         {
            if (board[static_cast<size_t>(adjRow)][static_cast<size_t>(adjCol)] == '*')
            {
               mineCount++;
            }
         }
      }
      return mineCount;
   }

   void setSpaceValue(int row, int col, int newVal)
   {
      this->board[static_cast<size_t>(row)][static_cast<size_t>(col)] = static_cast<char>('0' + newVal);
   }

   void setSpaceValue(int row, int col, char newVal)
   {
      this->board[static_cast<size_t>(row)][static_cast<size_t>(col)] = newVal;
   }

   void printBoard()
   {
      for (int r = 0; r < this->rows; r++)
      {
         for (int c = 0; c < this->cols; c++)
         {
            cout << board[static_cast<size_t>(r)][static_cast<size_t>(c)] << " ";
         }
         cout << endl;
      }
   }

private:
   vector<vector<char>> board;
   int rows;
   int cols;
   int minePercent;

   void initializeBoard()
   {
      int row = this->rows;
      int col = this->cols;
      int perc = this->minePercent;
      board.assign(static_cast<size_t>(rows),
                  vector<char>(static_cast<size_t>(cols)));

      for (int r = 0; r < row; r++)
      {
         for (int c = 0; c < col; c++)
         {
            if (randInt(1, 100) < perc)
            {
               board[static_cast<size_t>(r)][static_cast<size_t>(c)] = '*';
            }
            else
            {
               board[static_cast<size_t>(r)][static_cast<size_t>(c)] = '.';
            }
         }
      }
   }

   bool validCoord(const int row, const int col)
   {
      if (row >= 0 && row < static_cast<int>(board.size()))
      {
         if (col >= 0 && col < static_cast<int>(board[0].size()))
         {
            return true;
         }
      }
      return false;
   }
};

int main()
{
   int row, col;
   row = 10;
   col = 10;

   Mineboard board1(row, col);

   board1.printBoard();

   for (int r = 0; r < row; r++) {
      for (int c = 0; c < col; c++) {
         int newVal = board1.checkAdjMines(r, c);
         if (newVal != -1)
         {
            board1.setSpaceValue(r, c, newVal);
         }
      }
   }

   cout << endl;

   board1.printBoard();

   return 0;
}