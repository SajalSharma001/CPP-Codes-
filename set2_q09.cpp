#include <iostream>
using namespace std;

class BankAccount
{
private:
    long long accountNumber;
    double balance;

public:
    BankAccount(long long accNo, double initialBalance)
    {
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully." << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void displayBalance()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    long long accountNumber;
    double balance;
    double amount;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter initial balance: ";
    cin >> balance;

    BankAccount account(accountNumber, balance);

    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    account.deposit(amount);

    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    account.withdraw(amount);

    cout << "\nAccount Details" << endl;
    account.displayBalance();

    return 0;
}