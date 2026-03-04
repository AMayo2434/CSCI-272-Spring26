/* 
Name: Alicia Mayo
Course: CSCI 272 - Section 02
Lesson Number: Lesson 4
Code Topic: Encapsulation Example
Date: 03/01/2026
*/

#include "BankAccount.h"

int main() {

    User user1("Racket", "clank221");
    BankAccount bank1(&user1, 100.0);
    
    char choice;
    string username, password;
    cout << "\tWelcome to Generic Bank" << endl; 
    cout << endl; 
    cout << "Login" << endl;
    cout << "Please enter your username: " << endl; 
    cin >> username;
    cout << "Please enter your password: " << endl;
    cin >> password;
    
    cout << "Press 'L' to login." << endl;
    cout << "Press 'U' to update password." << endl;
    
    cin >> choice;
    
if (choice == 'L') {
    if (user1.login(username,password)){
        
        cout << "Login successful: " << endl;
        
        cout << "Depositing..." << endl;

        bank1.deposit(299.3); 

        cout << endl;
        cout << endl;
         
        cout << "Withdrawing... " << endl; 

        bank1.withdraw(12.0);
    }
    else {
        cout << "Incorrect credentials, please try again later." << endl;
    }
}
    
else if (choice == 'U') {
        user1.updatePassword("Spoon");
    }
    
else { 
        cout << "Choice unavaiable, please try again.";
    }
    
    return 0;
}

/*
Reflection:
1. What I understood:
    I eventually understood how to get the functions to
    work in the main. I also understood that I would need 
    to use cout statements inside of the class to access
    private member functions in the main. It would
    need to be added there in advance of the function being
    used.
    
2. Difficulties:
   It was difficult to learn how to display the private 
   values and it required trial and error to get it to work.
   It was also difficult to remember all of the function names  
   to use them in the main function. 
    
3. Research:
    I researched videos on example bank account programs
    made in C++ to try to figure out how to get the program
    to run. While it may not run well, it does function. I 
    also researched how to use classes and nested if else 
    statements to create the code for the login.
    
4. AI Usage:
    I used AI to look up an example of how to link the
    files to get them to work. I saw an example of how
    it used a pointer to used that to code the user input.
    
5. What I learned:
    I learned how to use the main function to display 
    functions from different files. You can interact with
    pieces of the code without knowing how exactly it's 
    coded. This allows for the seperation of important data
   and the regular consumer using a product. Or an employee using
   a secure connection that blocks them from accessing things.
   
*/