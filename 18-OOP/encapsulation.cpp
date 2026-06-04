#include <iostream>
using namespace std;

/*
Encapsulation:

Binding data and functions
into a single unit and
restricting direct access.
*/

class BankAccount {

private:

    double balance;

public:

    void setBalance(double amount) {

        balance = amount;
    }

    double getBalance() {

        return balance;
    }
};

int main() {

    BankAccount account;

    account.setBalance(5000);

    cout << "Balance: "
         << account.getBalance();

    return 0;
}