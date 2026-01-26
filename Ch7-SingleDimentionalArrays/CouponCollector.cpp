/*
Simulation: Coupon Collector’s Problem (Cards / Suits)

Coupon collector is a classic statistics problem. In this variation, you repeatedly pick
a random card from a standard 52-card deck until you have seen at least one card from
EACH of the four suits:
    - Clubs
    - Diamonds
    - Hearts
    - Spades

IMPORTANT:
- After picking a card, it is placed back into the deck before the next pick.
  (So the same exact card may be picked multiple times.)

TASK:
Write a C++ program that simulates the process and reports:
1) The total number of picks required until all four suits have been seen at least once.
2) The four “first-seen” cards that completed the set of suits (one card per suit).

DISPLAY REQUIREMENTS:
- Display the picked card for each suit (rank + suit).
  Example formats (choose one and be consistent):
    - "Ace of Spades"
    - "A♠" (text-only suit names are fine if you prefer)
- Display the total number of picks on a separate line.
- Ensure the output is easy to read and understandable.

PROGRAM REQUIREMENTS:
1) Use random number generation to simulate picking from a 52-card deck.
2) Track which suits have been seen (4 boolean flags or a boolean array of size 4).
3) Continue picking until all 4 suits have been seen.
4) Store the first card observed for each suit (so you can print one per suit).
5) Count and display the number of picks required.

HINTS:
- Represent a card using:
  - rank in [0..12] (A,2,3,...,10,J,Q,K)
  - suit in [0..3] (Clubs, Diamonds, Hearts, Spades)
- You can generate:
  - int suit = rand() % 4;
  - int rank = rand() % 13;

RULES:
- No global variables.
- Use standard C++ (C++17 acceptable).
- Use <cstdlib> and <ctime> (or <random> if preferred) for randomness.
- Keep code readable; helper functions are encouraged (e.g., to convert rank/suit to text).

STARTER FILE:
Create a file named CouponCollector.cpp and implement the program.
*/

#include <iostream>
using namespace std;

int main()
{
  // TODO: Implement the program here
  return 0;
}
