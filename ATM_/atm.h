/****************************************************************************************************************************
Title        : atm.h
Author       : Lanique Peterson
Description  : Header file for the ATM class
****************************************************************************************************************************/
#ifndef ATM_H
#define ATM_H

#include <string>
class ATM{
    public:
        /// required to intialize new objects
        ATM();
    
        /**
        * @ param  None
        * @return The user's balance amount
        */
        int getBalance(); // returns the total amount in bank account.

        /**
        * @param  amount The amount the user wants to deposit into their balance.
        *                Assume we will accept any amount that fits within an INT
        * @return The user's balance amount
        */
        int deposit(int amount); // will add amount of money and return the new total in bank account

        /**
        * @param  amount The amount the user wants to withdraw from their balance.
        * @return The balance in the user's account if the withdrawal amount is valid
        *         Return a -1 if the withdrawal amount is invalid without changing the user's balance
        */
        int withdraw(int amount); // will subtract amount of money and return the new total in bank account
        

        /**
        * This function return a string with all transactions (Withdrawals/Deposits) on seperate lines
        * Each transaction should be on their own line
        * Format:
        *       For all calls to getBalance: "Current Balance: <Balance amount at the time of the call>" 
        *       For all Deposits: "+ <Amount for Deposit>"
        *       For all valid Withdrawals: "- <Amount for Withdrawal>"
        *       For all invalid Withdrawals: "Invalid Withdrawal Amount: <Amount for invalid Withdrawal>"
        *       Note: The quotes are only there to show what the string should look like for each operation
        *             Replace the contents within <> with what it states
        *             Also note that the amount of lines in the string should equal the amount of total transactions before this function call 
        * Example:
        *       deposit(100);  // Returns 100
        *       deposit(200);  // Returns 200
        *       withdraw(100);  // Returns 100
        *       getBalance();   // Returns 100
        *       withdraw(1000); // Returns -1
        *       getTransactionString(); // Will return a string of all transactions
        * 
        *       Passing your string to std::cout should produce the following output:
        *       + 100
        *       + 200
        *       - 100
        *       Current Balance: 100
        *       Invalid Withdrawal Amount: 1000
        *
        *       NOTE: The last character of your string should be a new line unless you find no transactions
        *
        * @ param  None
        * @return A String that displays all transactions on their own line
        */
        std::string getTransactionString();
        
    private:
        int accountBalance;
        std::string displayTransactions;
};
#endif
