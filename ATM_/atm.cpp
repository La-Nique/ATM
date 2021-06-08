/****************************************************************************************************************************
Title        : atm.cpp
Author       : Lanique Peterson
Description  : Implementation file for the ATM class
****************************************************************************************************************************/

#include <iostream>
#include "atm.h"
ATM::ATM() /// our default constructor
{
    accountBalance = 0; /// all new bank accounts/objects will start with zero dollars in their bank accounts
    depositAmount = "";
    withdrawAmount = "";
    invaildAmount = 0;
    allTransactions = "";
}
int ATM::getBalance() /// no parameters; return user's balance amount
{
    allTransactions += "Current Balance: " + std::to_string(accountBalance) + "\n"; ///appending to string as per instructions
    return accountBalance;
}

int ATM::deposit(int amount) /// will add amount of money and return the new total in bank account
{
    allTransactions += "+ " + std::to_string(amount) + "\n"; //casting int into a string type; append to string.
    accountBalance = accountBalance + amount;
    return accountBalance;
}

int ATM::withdraw(int amount) /// will subtract amount of money and return the new total in bank account
{
    if(accountBalance >= amount)
    {
        allTransactions += "- " + std::to_string(amount) + "\n";
        accountBalance = accountBalance - amount; /// return The balance in the user's account if the withdrawal amount is valid;
        return accountBalance;
    }
    else
    {
        invaildAmount = invaildAmount + amount;
        allTransactions += "Invalid Withdrawal Amount: " + std::to_string(invaildAmount + amount) + "\n";
        return -1; /// else Return a -1 if the withdrawal amount is invalid without changing the user's balance;
    }
}

std::string ATM::getTransactionString()
{
    return allTransactions;
}

