#include <iostream> 
using namespace std; 
class BankAccount { 
private: 
    int accountNumber; 
    string name; 
    double balance; 
public: 
    // Constructor to initialize account 
    BankAccount(int accNo, string accName, double initialBalance) { 
        accountNumber = accNo; 
        name = accName; 
        balance = initialBalance; 
    } 
    // Deposit function 
    void deposit(double amount) { 
        if (amount > 0) { 
            balance += amount; 
            cout << "Amount deposited: ?" << amount << endl; 
        } else { 
            cout << "Invalid deposit amount!" << endl; 
        } 
    } 
    // Withdraw function 
    void withdraw(double amount) { 
        if (amount <= balance) { 
            balance -= amount; 
            cout << "Amount withdrawn: ?" << amount << endl; 
        } else { 
            cout << "Insufficient balance!" << endl; 
        } 
    } 
    // Display account details 
    void display() { 
        cout << "\nAccount Number: " << accountNumber << endl; 
        cout << "Account Holder: " << name << endl; 
        cout << "Current Balance: ?" << balance << endl; 
    } 
}; 
int main() 
{                   
    // Create account object 
    BankAccount myAccount(12345, "Aditya", 10000.0); 
 
    myAccount.display(); 
    myAccount.deposit(2500.0); 
    myAccount.withdraw(4000.0); 
    myAccount.display(); 
    return 0; 
}
