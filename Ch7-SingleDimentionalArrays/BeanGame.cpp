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
using namespace std;

int main()
{
  // TODO: Implement the program here
  return 0;
}
