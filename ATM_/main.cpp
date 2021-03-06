// Lanique Peterson
// Test file.
// To compile via terminal run: g++ main.cpp -std=c++11
// To execute the binary run the: ./a.out
#include "atm.cpp"

#include <string>
#include <iostream>

using namespace std;

int main(){
    ATM myATM;
    int amount;
    
    cout << "I want to deposit: " << endl;
    cin >> amount;
    
    myATM.deposit(amount);
    
    cout << "My current balance is now: " << endl << myATM.getBalance() << endl;
    
    cout << "I want to withdraw: " << endl;
    cin >> amount;
    
    myATM.withdraw(amount);
    
    cout << "My current balance is now: " << endl << myATM.getBalance() << endl;
    cout << "-------- getTransactionString() -------- " << endl;
    
    myATM.getTransactionString();
    
    cout << myATM.allTransactions;
    
return 0;
}
