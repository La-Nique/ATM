/****************************************************************************************************************************
Title        : atm.cpp
Author       : Lanique Peterson
Description  : Implementation file for the ATM class
****************************************************************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include "atm.h"
ATM::ATM() /// our default constructor
{
    accountBalance = 0; /// all new bank accounts start with zero dollars in their bank accounts
    depositAmount = "";
    withdrawAmount = "";
    invaildAmount = 0;
}
int ATM::getBalance() /// no parameters; return user's balance amount
{
    return accountBalance;
}

int ATM::deposit(int amount) /// will add amount of money and return the new total in bank account
{
    counter++;
    //depositAmount = "+ " + std::to_string(amount);
    displayTransactions.push_back("+ " + std::to_string(amount));
    accountBalance = accountBalance + amount;
    return accountBalance;
}

int ATM::withdraw(int amount) /// will subtract amount of money and return the new total in bank account
{
    if(accountBalance >= amount)
    {
        counter++;
        //withdrawAmount = "- " + std::to_string(amount);
        displayTransactions.push_back("- " + std::to_string(amount));
        accountBalance = accountBalance - amount; /// return The balance in the user's account if the withdrawal amount is valid;
        return accountBalance;
    }
    else
    {
        invaildAmount = invaildAmount + amount;
        return -1; /// else Return a -1 if the withdrawal amount is invalid without changing the user's balance;
    }
}

std::string ATM::getTransactionString()
{
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
     *       Current Balance: 200
     *       Invalid Withdrawal Amount: 1000
     *
     *       NOTE: The last character of your string should be a new line unless you find no transactions
     *
     * @ param  None
     * @ return A String that displays all transactions on their own line
     */
        // Print Strings stored in Vector
    for (int i = 0; i < displayTransactions.size(); i++)
    std::cout << displayTransactions[i] << "\n";
    
    std::cout << "Current Balance: " << getBalance() << std::endl;
    std::cout << "Invalid Withdrawal Amount: " << invaildAmount << std::endl;
    
    std::string s;
    for (const auto &piece : displayTransactions) s += piece;
    
    return s;
}

