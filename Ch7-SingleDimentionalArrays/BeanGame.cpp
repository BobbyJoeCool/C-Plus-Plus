/*
Simulation: Bean Machine (Galton Box / Quincunx)

The bean machine, also known as a quincunx or Galton box, is a device used to demonstrate
probability and statistics. Balls are dropped from the top of the board and encounter
a series of pegs arranged in a triangular pattern.

Each time a ball hits a peg:
- It has a 50% chance of falling to the LEFT (L)
- It has a 50% chance of falling to the RIGHT (R)

After passing through all rows of pegs, the ball lands in one of the slots at the bottom.

TASK:
Write a C++ program that simulates the bean machine.

PROGRAM INPUT:
1) Prompt the user to enter:
   - The number of balls to drop
   - The number of slots in the machine

PROGRAM OUTPUT:
1) For EACH ball:
   - Print the path it takes using characters 'L' and 'R'
     (Example: LLRRLLR or RLRRLRR)

2) After all balls have fallen:
   - Display a vertical histogram showing the final buildup of balls in each slot

SIMULATION RULES:
- Each ball encounters (slots − 1) pegs.
- Each peg causes a random decision: left or right.
- The slot where the ball lands is determined by the number of 'R' moves in its path.
  Examples:
    - Path: LRLRLRR → 4 rights → slots[4]
    - Path: RRLLLLL → 2 rights → slots[2]

HINTS:
- Create an integer array named `slots`
  where slots[i] stores the number of balls in slot i.
- Initialize all slot values to 0.
- Use random number generation to decide left or right at each peg.
- Use nested loops:
  - Outer loop for each ball
  - Inner loop for each peg decision

HISTOGRAM REQUIREMENTS:
- Display the histogram vertically (like stacked balls).
- Each ball can be represented by a character such as 'O' or '*'.
- Ensure the histogram is properly aligned and readable.

RULES:
- No global variables.
- Use standard C++ (C++17 acceptable).
- Use <cstdlib> and <ctime> or <random> for random number generation.
- Keep main() focused on coordination; helper functions are encouraged.
- Output must be clear and understandable.

STARTER FILE:
Create a file named BeanGame.cpp and implement the program.
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

string simulateBallPath(int numberOfSlots);
int getSlotFromPath(string& path);
void displayHistogram(vector<int>& slots);

int main()
{
  srand(static_cast<unsigned>(time(nullptr))); // seed rand() once

  cout << "How many balls do you want to drop: ";
  int balls;
  cin >> balls;

  cout << "How many slots will there be at the end: ";
  int numberOfSlots;
  cin >> numberOfSlots;
  vector<int> slots(static_cast<size_t>(numberOfSlots), 0);

  for (int i = 1; i <= balls; i++)
  {
    string path = simulateBallPath(numberOfSlots);
    cout << "Path of Ball " << i << ": " << path << endl;
    int slotNumber = getSlotFromPath(path);
    slots[static_cast<size_t>(slotNumber)]++;
  }

  displayHistogram(slots);

  return 0;
}

string simulateBallPath(int numberOfSlots)
{
  string path = "";
  int direction;
  for (int turns = 1; turns < numberOfSlots; turns++)
  {
    direction = rand() %2;
    switch (direction)
    {
          case 0: 
            path += "L";
            break;
          case 1:
            path += "R";
            break;
      }
  }
  return path;
}

int getSlotFromPath(string& path)
{
  int slot = 0;
  // Count the number of right turns to find the slot it lands in.
  for (size_t i = 0; i < path.length(); i++)
  {
    if (path[i] == 'R')
    {
      slot++;
    }
  }
  return slot;
}

void displayHistogram(vector<int>& slots) 
{
  cout << endl;
  int slotMax = 0;
  // for loop finds the slot with the most balls.
  for (size_t i = 0; i < slots.size(); i++)
  {
    if (slots[i] > slotMax)
    {
      slotMax = slots[i];
    }
  }

  for (int row = slotMax; row > 0; row--)
  {
    for (size_t slot = 0; slot < slots.size(); slot++)
    {
      if (slots[slot] >= row)
      {
        cout << "| * ";
      }
      else
      {
        cout << "|   ";
      }
    }
    cout << "|\n";
  }
  cout << string(slots.size() * 4 + 1, '-') << endl;
  return;
}
