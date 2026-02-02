/*
PROGRAM 1 (Moderate) — Library Checkout (Classes + Vector of Objects)

GOAL:
Practice defining classes, creating objects, storing them in a collection, and basic
state changes (checked out / returned).

REQUIREMENTS:
1) Create a class Book with:
   - private:
       string title
       string author
       bool isCheckedOut
     public:
       - constructor Book(string title, string author)
       - void checkOut()
       - void returnBook()
       - bool getIsCheckedOut() const
       - string getTitle() const
       - void print() const    # prints book info + status

2) In main:
   - Create a vector<Book> library with at least 5 books.
   - Display a simple menu loop:
       1) List all books
       2) Check out a book (by index)
       3) Return a book (by index)
       4) Quit
   - Validate index input (don’t crash if invalid).
   - Prevent checking out an already checked-out book (print a message).
   - Prevent returning a book that is not checked out (print a message).

OUTPUT:
- Clear menu, clear results after each action.

NOTES:
- You may use 0-based or 1-based indexing, but be consistent.

*/

#include <iostream>
using namespace std;

int main()
{
    // TODO: Implement the program.
    return 0;
}
