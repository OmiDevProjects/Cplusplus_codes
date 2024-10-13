// Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.

#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    float balance = 0;

public:
    void depositCash(float cash) {
        balance += cash;
    }

    void withdrawCash(float cash) {
        if ((balance - cash) < 0)
            cout << "No Enough Money to Withdraw" <<endl;
        else
            balance -= cash;
    }

    float showBalance() {
        return balance;
    }

};

int main() {

    BankAccount acc1, acc2;
    acc1.depositCash(500.40);
    acc2.depositCash(1500.0);

    acc1.withdrawCash(504.14);

    cout << "Balance of Acc1 : " << acc1.showBalance() << endl;
    cout << "Balance of Acc2 : " << acc2.showBalance() << endl;


    return 0;
}
