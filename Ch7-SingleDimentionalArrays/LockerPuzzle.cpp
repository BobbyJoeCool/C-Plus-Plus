/*
Game: Locker Puzzle

A school has 100 lockers and 100 students. All lockers are closed on the first day of school.

As the students enter:
- Student S1 opens every locker.
- Student S2 starts with locker L2 and changes every 2nd locker.
- Student S3 starts with locker L3 and changes every 3rd locker.
- ...
- Student S100 starts with locker L100 and changes every 100th locker.

“Change” means:
- If the locker is open, close it.
- If the locker is closed, open it.

TASK:
Write a C++ program to determine which lockers are open after all 100 students have finished.
Display all open locker numbers separated by a tab.

HINT:
Use an array of 100 boolean values where:
- false = closed
- true  = open
Initially, all lockers are false (closed).

PROGRAM REQUIREMENTS:
1) Use exactly 100 lockers and 100 students.
2) Use a loop for each student and a nested loop to toggle lockers.
3) Print the open locker numbers, in increasing order, separated by a tab.
4) Do not print extra spaces at the beginning or end of the line.

RULES:
- No global variables.
- Use standard C++ (C++17 is acceptable).
- Keep the logic clear and readable.

STARTER FILE:
Create a file named LockerPuzzle.cpp and implement the program.
*/

#include <iostream>
using namespace std;

void toggleLockersForStudent(int studentNumber, bool lockers[], int lockerLength);

    int main()
{
    bool lockers[100] = {false};

    int lockerLength = sizeof(lockers) / sizeof(lockers[0]);

    for (int student = 1; student <= lockerLength; student++)
    {
        toggleLockersForStudent(student, lockers, lockerLength);
    }

    int openCount = 0;

    cout << "The following lockers are open.\n";

    for (int locker = 1; locker <= lockerLength; locker++)
    {
        if (lockers[locker - 1])
        {
            cout << locker << "\t";
            openCount++;
            if (openCount % 10 == 0)
            {
                cout << endl;
            }
        }
    }
    cout << endl;
    return 0;
}

void toggleLockersForStudent(int studentNumber, bool lockers[], int lockerLength)
{
    for (int i = studentNumber - 1; i < lockerLength; i += studentNumber)
    {
        // studentNumber - 1 is used because the Array starts at 0, but the studentNumber has to start with 1.
        lockers[i] = !lockers[i]; // Flips from false to true or true to false.
    }
}