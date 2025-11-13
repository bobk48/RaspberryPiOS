//In this program:

//	•	We define a BankAccount class with private member variables for the account holder’s name and balance.
//	•	The constructor initializes the account with an initial balance.
//	•	Public member functions are provided to deposit, withdraw, get the balance, and display account information.
//	•	In the main function, we create a BankAccount object, perform operations on it, and display account information.

//This example illustrates the use of classes, encapsulation, and member functions in an object-oriented C++ program.


#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolder;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(const std::string& holderName, double initialBalance) {
        accountHolder = holderName;
        balance = initialBalance;
    }

    // Member function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " into the account. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " from the account. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

    // Member function to get the account balance
    double getBalance() const {
        return balance;
    }

    // Member function to display account information
    void displayInfo() const {
        std::cout << "Account Holder: " << accountHolder << std::endl;
        std::cout << "Account Balance: $" << balance << std::endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount myAccount("John Doe", 1000.0);

    // Perform some operations
    myAccount.displayInfo();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.displayInfo();

    return 0;
}
