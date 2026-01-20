/*
CH3-P2: Grade Letter

Goal:
Practice else-if ladders.

Task:
- Read a test score (0–100).
- Output A/B/C/D/F using:
  >=90 A, >=80 B, >=70 C, >=60 D, else F

Concepts Practiced:
- if / else if / else
- relational operators
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
  double numberGrade;
  string letterGrade;

  cout << "Enter the percent score on your test (for example, enter 90 for 90%): ";
  cin >> numberGrade;

  if (numberGrade >= 90) {
    letterGrade = "A";
  } else if (numberGrade >= 80) {
    letterGrade = "B";
  } else if (numberGrade >= 70) {
    letterGrade = "C";
  } else if (numberGrade >= 60) {
    letterGrade = "D";
  } else {
    letterGrade = "F";
  }

  cout << "A score of " << numberGrade << " out of 100 is a Grade of " << letterGrade <<"\n";

  return 0;
}