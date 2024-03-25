#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(const std::string& accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {
        std::cout << "Bank account created with account number: " << accountNumber << std::endl;
    }
    ~BankAccount() {
        std::cout << "Bank account with account number " << accountNumber << " is being destroyed." << std::endl;
    }
    void displayBalance() {
        std::cout << "Balance in account " << accountNumber << " is: $" << balance << std::endl;
    }
};

int main() {
    BankAccount account1("123456", 1000.0);
    BankAccount account2("654321", 2000.0);
    account1.displayBalance();
    account2.displayBalance();

    return 0;
}
