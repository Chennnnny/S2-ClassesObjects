#include <iostream>
#include <string>
using namespace std;

class BankAccount {
 // TODO
    private:
        string accountNumber;
        string accountholder;
        float balance = 0;

    public:
        BankAccount(string accountNumber, string accountholder, float balance) {
            this -> accountNumber = accountNumber;
            this -> accountholder = accountholder;
            this -> balance = balance;
        }

        void deposit(float amount) {
            this -> balance += amount;
        }

        bool withdraw(float amount) {
            if(amount > balance) {
                cout << "not enough funds! cannot Withdraw" << endl;
                return false;
            }
            else {
                balance -= amount;
                return true;
            }
        }

        void displayAccountInfo() {
            
        }

        string toString() {
            return "Number: " + accountNumber + ", Holder: " + accountholder + ", Balance: " + to_string(balance);
        }

};

int main() {

    // Create an account with 0$
    BankAccount myAccount("ABC", "ronan", 0);
    cout<< myAccount.toString() << endl;

    // Deposite 100$
    myAccount.deposit(100);
    cout<< myAccount.toString() << endl;

    // Withdraw 80$ - Should success
    myAccount.withdraw(80);
    cout<< myAccount.toString() << endl;

    // Withdraw 30$ - Should fail
    myAccount.withdraw(30);
    cout<< myAccount.toString() << endl;

    return 0;
}