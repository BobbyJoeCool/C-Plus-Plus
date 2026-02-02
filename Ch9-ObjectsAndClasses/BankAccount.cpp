/*
PROGRAM 2 (Moderate) — Bank Account Simulator (Classes + Encapsulation + Rules)

GOAL:
Practice class design, encapsulation, and enforcing business rules through methods.

REQUIREMENTS:
1) Create a class BankAccount with:
   - private:
       string ownerName
       int accountNumber
       double balance
     public:
       - constructor BankAccount(string ownerName, int accountNumber, double startingBalance)
       - bool deposit(double amount)        # returns true if successful
       - bool withdraw(double amount)       # returns true if successful
       - bool transferTo(BankAccount& other, double amount)
       - double getBalance() const
       - void printSummary() const          # owner, acct#, balance formatted

2) Rules:
   - deposit amount must be > 0
   - withdraw amount must be > 0 and <= balance
   - transfer amount must be > 0 and <= balance
   - Print a clear error message if an operation fails

3) In main:
   - Create TWO accounts.
   - Provide a menu loop:
       1) Deposit to account A/B
       2) Withdraw from account A/B
       3) Transfer A -> B
       4) Transfer B -> A
       5) Print summaries
       6) Quit
   - After every successful operation, print updated balances.

NOTES:
- Use references correctly for transferTo.
- No global variables.

*/

#include <iostream>
using namespace std;

int main()
{
    // TODO: Implement the program.
    return 0;
}
