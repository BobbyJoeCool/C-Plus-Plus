/*
PROGRAM 3 (Moderate) — Course Gradebook (Objects + Aggregation + 2D Data)

GOAL:
Use multiple classes and a 2D structure to store grades (students x assignments),
then compute per-student and per-assignment averages.

REQUIREMENTS:
1) Create a class Student with:
   - private:
       string name
       int id
     public:
       - constructor Student(string name, int id)
       - string getName() const
       - int getId() const

2) Create a class Gradebook with:
   - private:
       vector<Student> students
       vector<string> assignments
       vector<vector<double>> grades   # grades[i][j] = student i, assignment j
     public:
       - constructor Gradebook(vector<Student> students, vector<string> assignments)
       - void setGrade(int studentIndex, int assignmentIndex, double grade)
       - double studentAverage(int studentIndex) const
       - double assignmentAverage(int assignmentIndex) const
       - void printTable() const        # prints a grid/table with averages

3) Rules / Validation:
   - Grade must be between 0 and 100 (inclusive).
   - Indices must be validated.
   - If invalid input, print an error and do not modify data.

4) In main:
   - Create at least 4 students and at least 3 assignments.
   - Prompt the user to enter grades for each student for each assignment
     (nested loops recommended).
   - Print the final grade table:
       - header row: assignment names
       - each student row: grades + student average
       - bottom row: assignment averages

NOTES:
- This program intentionally mixes classes and a 2D vector to reinforce both topics.
- Keep output readable (use iomanip if you want).

*/

#include <iostream>
using namespace std;

int main()
{
    // TODO: Implement the program.
    return 0;
}
