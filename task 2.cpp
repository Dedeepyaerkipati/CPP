
	#include <bits/stdc++.h>

using namespace std;

class bankaccount {
private:
  
    float balance;
    string accountnumber;

public:
    string holdername;
   

//constructor
   bankaccount( float b, string a, string h) {
      
      balance = b; 
	 accountnumber= a;
        holdername = h;
      
    }

    

   
    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: ?" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: ?" << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    // Method to check balance
    void checkBalance() const {
        cout << "Current Balance: ?" << balance << endl;
    }

    // Optional: Show account number safely
    void showAccountInfo() const {
        cout << "Account Holder: " << holdername << endl;
        cout << "Account Number: " << accountnumber << endl;
    }
};

int main() {
   
        bankaccount acc1(1000,"123b456",  "Riya Sharma");

    // Showing initial info
    acc1.showAccountInfo();
    acc1.checkBalance();

    // Performing operations
    acc1.deposit(500.0);
    acc1.withdraw(300.0);
    acc1.checkBalance();
}

