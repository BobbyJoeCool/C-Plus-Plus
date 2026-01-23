/*
CH4-P1: Power Table

Goal:
Practice <cmath> and formatted output.

Task:
- Print a table for a = 1..5 and b = a+1..6 (matching pairs):
  a   b   pow(a,b)
- Use pow(a, b) and cast to int before printing the result.

Concepts Practiced:
- #include <cmath>
- std::pow
- type casting to int
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {  
  cout << "a\t" << "b\t" << "pow(a,b)" << "\n";
  cout << "-----------------------------\n";

  int a = 1;
  int b = a + 1;
  cout << a << "\t" << b << "\t" << static_cast<int>(pow(a, b)) << "\n";
  
  a ++; 
  b = a + 1;
  cout << a << "\t" << b << "\t" << static_cast<int>(pow(a, b)) << "\n";
  
  a++;
  b = a + 1;
  cout << a << "\t" << b << "\t" << static_cast<int>(pow(a, b)) << "\n";
  
  a++;
  b = a + 1;
  cout << a << "\t" << b << "\t" << static_cast<int>(pow(a, b)) << "\n";
  
  a++;
  b = a + 1;
  cout << a << "\t" << b << "\t" << static_cast<int>(pow(a, b)) << "\n";

  return 0;
}