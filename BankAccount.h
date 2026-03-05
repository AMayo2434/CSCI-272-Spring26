#include <iostream>
#include <string>
#include "User.h"

using namespace std;

class BankAccount{
    private: 
        double balance;
        User* accOwner;
    public:
    
    BankAccount(User* user, double balance = 0.0) {
        accOwner = user;
        this->balance = balance;
    }
        void deposit(double amount){
            balance += amount;
            
            cout << "You deposited: " << amount << endl; 
            
            cout << "Your current balance is: " << balance << endl;
        }
        
        void withdraw(double amount){
            if (amount <= balance) {
                balance -= amount;
            }
            
            cout << "You withdrew: " << amount << endl;
            
            cout << "Your balance is: " << balance << endl;
        }
        
 
   
};