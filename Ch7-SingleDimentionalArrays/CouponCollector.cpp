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
2) Prints all cards drawn until 4 suits are picked.

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
4) Display all cards drawn.
5) Count and display the number of picks required.

HINTS:
- Represent a card using:
  - rank in [0..12] (A,2,3,...,10,J,Q,K)
  - suit in [0..3] (Clubs, Diamonds, Hearts, Spades)
- You can generate:
  - int suit = rand() % 4;
  - int rank = rand() % 13;

RULES:
- Use standard C++ (C++17 acceptable).
- Use <cstdlib> and <ctime> (or <random> if preferred) for randomness.
- Keep code readable; helper functions are encouraged (e.g., to convert rank/suit to text).

STARTER FILE:
Create a file named CouponCollector.cpp and implement the program.
*/

#include <iostream>
#include <vector>
#include <string>
#include <random>
using namespace std;

string pickACard(const vector<int>& cards, vector<bool>& suits);
mt19937 gen(random_device{}());
uniform_int_distribution<int> dist(0, 51);

int main()
{

  vector<int> cards(52, 0);
  vector<bool> suits(4, false);
  int i = 1;
  for (i = 1; i <= 52; i++)
  {
    cards[static_cast<size_t>(i - 1)] = i; // sets the array to be {1,2,3,4,5....}
  }

  /*
  The array:
  1-13 will be Spades (0 for the boolean)
  14-26 will be Hearts (1 for the boolean)
  27-39 will be Diamonds (2 for the boolean)
  40-52 will be Clubs.  (3 for the boolean)
  The first of each suit is an A, second 2, third 3...  11 J, 12, Q, 13 K.
  */

  int count = 0;

  do
  {
    string card = pickACard(cards, suits);
    cout << "The card drawn is the " << card << endl;
    count++;
  } while (!(suits[0] && suits[1] && suits[2] && suits[3]));

  cout << "One card of each suit has been drawn!\n";
  cout << "A total of " << count << " cards were drawn.\n";
  return 0;
}

string pickACard(const vector<int>& cards, vector<bool>& suits) {
  int card = cards[static_cast<size_t>(dist(gen))];
  int valueIndex = (card - 1) % 13;
  int suitIndex = (card - 1) / 13;
  string suit;
  switch (suitIndex) {
      case 0:
        suit = "Spades";
        break;
      case 1:
        suit = "Hearts";
        break;
      case 2:
        suit = "Diamonds";
        break;
      case 3:
        suit = "Clubs";
        break;
      default:
        suit = "Invalid Suit";
        break;
  };

  suits[static_cast<size_t>(suitIndex)] = true;
  // Sets the suit picked in the array to true.

  string value; 
  switch (valueIndex) {
      case 0:
        value = "Ace";
        break;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        value = to_string(valueIndex + 1);
        break;
      case 10:
        value = "Jack";
        break;
      case 11:
        value = "Queen";
        break;
      case 12:
        value = "King";
        break;
      default:
        value = "Invalid Card";
        break;
  };

  return value + " of " + suit;
}