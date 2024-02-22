#include <iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {   
        balance += amount;
    }

    // Function to withdraw money from the account
    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;
        } else {
            return false;
        }
    }

    // Function to get the account balance
    double getBalance() {
        return balance;
    }

    // Function to get the account number
    int getAccountNumber() {
        return accountNumber;
    }
};

int main() {
    BankAccount account1(12345, 1000.0);

    account1.deposit(500.0);
    cout << "Account balance after deposit: " << account1.getBalance() << endl;

    if (account1.withdraw(200.0)) {
        cout << "Account balance after withdrawal: " << account1.getBalance() << endl;
    } else {
        cout << "Insufficient balance for withdrawal" << endl;
    }

    return 0;
}