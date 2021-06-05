// Lanique Peterson
// Test file.
// To compile via terminal run: g++ main.cpp -std=c++11
// To execute your binary run the: ./a.out

#include "atm.cpp"
#include <string>
#include <iostream>

int main(){
    ATM myATM;
    myATM.deposit(90000);
    
    std::cout << myATM.getBalance() << std::endl;
    
    return 0;
}
