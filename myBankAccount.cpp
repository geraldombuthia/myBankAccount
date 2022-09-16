#include <iostream>
#include <string>
#include "myBankAccount.h"

//constructors
myBankAccount::myBankAccount() {
    std::cout << "Generated" << std::endl;
}
myBankAccount::myBankAccount(std::string nm) {
    setName(nm);
}
myBankAccount::myBankAccount(std::string nm, double x, int y) {
    setName(nm);
    setBalance(x);
    setChecking(x);
}
//Setters
void myBankAccount::setName(std::string nm) {
    name = nm;
}
void myBankAccount::setBalance(double x) {
    balance = x;
}
void myBankAccount::setChecking(int x) {
    if (x > 0)
        isChecking = true;
    else
        isChecking = false;
}
void setDate() {
  /*  time(&curr_time);
    curr_tm = localtime(&curr_time);*/
}

//Getters
void myBankAccount::getName() {
    std::cout << name << std::endl;
}
void myBankAccount::getBalance() {
    std::cout << balance << std::endl;
}
void myBankAccount::getChecking() {
    if (isChecking = true)
        std::cout << "This is a checking account" << std::endl;
    else
        std::cout << "This is a saving account" << std::endl;
}
/*void getDate() {
    strftime(date_string, 50, "%B %d, %Y", curr_tm);
    strftime(time_string, 50, "%T", curr_tm);
}*/
void myBankAccount::getAllInfo() {

    std::cout << std::endl << "Output Summary" << std::endl << std::endl;
    this->getName();
    this->getBalance();
    this->getChecking();
}

//Methods
void myBankAccount::deposit(double y) {
    balance += y;
    std::cout << "Deposit successful. New Balance " << balance << std::endl;
}
double myBankAccount::charges(double x) {
    return 0.015 * x;
}
void myBankAccount::withdraw(double x) {
    if (x > balance)
        std::cout << "Insufficient funds to complete this request." << std::endl;
    else if (x < balance && (balance - x) > 200)
        balance -= x;
    balance -= charges(x);
    std::cout << "Withdrawal of " << x << "/= successful. Service charge was " << charges(x) << "/=. Balance " << balance << " /=." << std::endl;
}
double myBankAccount::getInterest(double ln) {
    return ((1 + 0.14) * ln);
}
void myBankAccount::getLoan(double ln) {
    if (ln < (balance * 3)) {
        loan = ln;
        std::cout << "Your Loan request of " << ln << "/= is successful. You owe " << getInterest(ln) << "/=." << std::endl;
    }
    else if (ln > (balance * 3))
    {
        std::cout << "Your loan request failed" << std::endl;
    }
}

