#include "User.h"

class BankAccount{
    private: 
        double balance;
        User* accOwner;
    public:
    
    BankAccount(User* user, double balance = 0.0) {
        
    }
        void deposit(double amount){
            balance +- amount;
            
            cout << "You deposited: " << amount << endl; 
            
            cout << "Your current balance is: " << balance;
        }
        
        void withdraw(double amount){
            if (amount <= balance) {
                balance -= amount;
            }
            
            cout << "You withdrew: " << amount;
            
            cout << "Your balance is: " << balance;
        }
        
 
   
};