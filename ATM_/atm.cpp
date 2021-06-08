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
    allTransactions = "";
}
int ATM::getBalance() /// no parameters; return user's balance amount
{
    allTransactions += "Current Balance: " + std::to_string(accountBalance) + "\n";
    return accountBalance;
}

int ATM::deposit(int amount) /// will add amount of money and return the new total in bank account
{
    //counter++;
    //displayTransactions.push_back("+ " + std::to_string(amount));
    allTransactions += "+ " + std::to_string(amount) + "\n";
    accountBalance = accountBalance + amount;
    return accountBalance;
}

int ATM::withdraw(int amount) /// will subtract amount of money and return the new total in bank account
{
    if(accountBalance >= amount)
    {
        //counter++;
        //withdrawAmount = "- " + std::to_string(amount);
        //displayTransactions.push_back("- " + std::to_string(amount));
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
//    for (int i = 0; i < displayTransactions.size(); i++)
//        std::cout << displayTransactions[i] << "\n";
//
//    std::cout << "Current Balance: " << getBalance() << std::endl;
//    std::cout << "Invalid Withdrawal Amount: " << invaildAmount << std::endl;
    
    
//    allTransactions += "Current Balance: " + std::to_string(getBalance()) + "\n";
//    allTransactions += "Invalid Withdrawal Amount: " + std::to_string(invaildAmount) + "\n";
    
    return allTransactions;
}

