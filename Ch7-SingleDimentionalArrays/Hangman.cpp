/*
Game: Hangman

Write a Hangman game that randomly selects a word and prompts the user to guess
one letter at a time.

GAME BEHAVIOR:
- The selected word is initially displayed using asterisks (*) for each letter.
- The user guesses one lowercase letter per turn.
- If the guessed letter appears in the word, reveal all matching positions.
- If the guessed letter does NOT appear in the word, count it as a miss.
- Repeated guesses of the same letter should be detected and reported
  (they should NOT count as an additional miss).

- When the user completes the word:
  1) Display the completed word
  2) Display the total number of misses
  3) Ask the user whether they want to play again with a new word

WORD STORAGE:
Declare an array of strings containing the possible words, for example:

    const string words[] = {"write", "that", "program", "computer", "science"};

You may add any words you like.

PROGRAM REQUIREMENTS:
1) Randomly select a word from the word array.
2) Use a loop to allow repeated guessing until the word is complete.
3) Track:
   - Correct guesses
   - Incorrect guesses (misses)
   - Previously guessed letters
4) Use only lowercase letters for simplicity.
5) Prompt the user to continue playing after each completed word.

RULES:
- Use arrays (not vectors unless instructed otherwise).
- Do NOT use global variables.
- Use <cstdlib> and <ctime> for random number generation.
- Keep main() focused on coordination; use helper functions if needed.
- Output must closely resemble a traditional Hangman-style interaction.

STARTER FILE:
Create a file named Hangman.cpp and implement the program.
*/

#include <iostream>
using namespace std;

int main()
{
  // TODO: Implement the program here
  return 0;
}