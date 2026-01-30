/*
Write four overloaded functions that return the average of an array with the following signatures:

short  average(const short array[], int size);
int    average(const int array[], int size);
long   average(const long array[], int size);
double average(const double array[], int size);

Write a test program that:
1) Declares four arrays of different data types:
   - short
   - int
   - long
   - double

2) Ensures each array has a DIFFERENT size.

3) Calls the appropriate overloaded average() function for each array.

4) Displays:
   - The elements of each array
   - The average value returned by the function

5) Output must be clearly labeled and easy to read.

RULES:
- Use function overloading (same function name, different parameter types).
- Do NOT use global variables.
- Pass arrays using const correctness.
- The main function should only coordinate logic and output.
*/

#include <iostream>
#include <array>
using namespace std;

short average(const short array[], int size);
int average(const int array[], int size);
long average(const long array[], int size);
double average(const double array[], int size);

int main()
{
   short shorts[] = {1, 2, 3, 4, 5};
   int integers[] = {10, 25, 44, 89, 104, 287, 398};
   long longs[] = {10203, 1928340, 18957980, 18765439, 12870493, 75810943, 7518039};
   double doubles[] = {.02, .08, .123, .278, .283495, .781492, .97623187};

   int shortsSize = sizeof(shorts)/sizeof(shorts[0]);
   int integersSize = sizeof(integers) / sizeof(integers[0]);
   int longsSize = sizeof(longs) / sizeof(longs[0]);
   int doublesSize = sizeof(doubles) / sizeof(doubles[0]);

   for (int i = 0; i < shortsSize; i++) 
   {
      cout << shorts[i] << ", ";
   }
      cout << endl;
      cout << "The average is: " << average(shorts, shortsSize) << endl << endl;
      for (int i = 0; i < integersSize; i++)
      {
         cout << integers[i] << ", ";
      }
   cout << endl;
   cout << "The average is: " << average(integers, integersSize) << endl << endl;
   for (int i = 0; i < longsSize; i++)
   {
      cout << longs[i] << ", ";
   }
   cout << endl;
   cout << "The average is: " << average(longs, longsSize) << endl << endl;
   for (int i = 0; i < doublesSize; i++)
   {
      cout << doubles[i] << ", ";
   }
   cout << endl;
   cout << "The average is: " << average(doubles, doublesSize) << endl;

   return 0;
}

short average(const short array[], int size)
{
   int sum = 0;
   for (int i = 0; i < size; i++)
   {
      sum += array[i];
   }
   return (short)(sum / size);
}

int average(const int array[], int size)
{
   int sum = 0;
   for (int i = 0; i < size; i++)
   {
      sum += array[i];
   }
   return (int)(sum / size);
}

long average(const long array[], int size)
{
   long sum = 0;
   for (int i = 0; i < size; i++)
   {
      sum += array[i];
   }
   return (long)(sum / size);
}

double average(const double array[], int size)
{
   double sum = 0;
   for (int i = 0; i < size; i++)
   {
      sum += array[i];
   }
   return (double)(sum / size);
}