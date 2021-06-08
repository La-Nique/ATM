/****************************************************************************************************************************
 Title        : atm.cpp
 Author       : Lanique Peterson
 Description  : Implementation file for the ATM class
 ****************************************************************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include "atm.h"
ATM::ATM()
{
    accountBalance = 0;
    depositAmount = "";
    withdrawAmount = "";
    invaildAmount = 0;
}
int ATM::getBalance()
{
    return accountBalance;
}

int ATM::deposit(int amount)
{
    counter++;
    displayTransactions.push_back("+ " + std::to_string(amount));
    accountBalance = accountBalance + amount;
    return accountBalance;
}

int ATM::withdraw(int amount)
{
    if(accountBalance >= amount)
    {
        counter++;
        displayTransactions.push_back("- " + std::to_string(amount));
        accountBalance = accountBalance - amount;
        return accountBalance;
    }
    else
    {
        invaildAmount = invaildAmount + amount;
        return -1;
    }
}

std::string ATM::getTransactionString()
{
    for (int i = 0; i < displayTransactions.size(); i++)
    std::cout << displayTransactions[i] << "\n";
    
    std::cout << "Current Balance: " << getBalance() << std::endl;
    std::cout << "Invalid Withdrawal Amount: " << invaildAmount << std::endl;
    
    std::string s;
    for (const auto &piece : displayTransactions) s += piece;
    
    return s;
}

