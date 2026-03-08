/*
Bank Account Summary
Scenario:
Store account details and display balance.
Class Name:
BankAccount
Attributes:
•	string accountHolderName
•	int accountNumber
•	double balance
Methods:
•	void inputDetails()
•	void displayDetails()
•	void deposit(double amount)
•	void withdraw(double amount)
*/
#include<iostream>
using namespace std;

class BankAccount {
    string accountHolderName;
    int accountNumber;
    double balance;

public:

    void inputDetails() {
        cout << "Enter account holder name: ";
        cin >> accountHolderName;

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void displayDetails() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        balance = balance + amount;
        cout << "Amount deposited successfully!" << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance = balance - amount;
            cout << "Amount withdrawn successfully!" << endl;        }
}};
int main() {
    BankAccount b1;
    b1.inputDetails();
    b1.displayDetails();
    b1.deposit(500);
    b1.withdraw(200);
    b1.displayDetails();
    return 0;
}