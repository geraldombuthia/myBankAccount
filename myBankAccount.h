#ifndef MYBANKACCOUNT_H
#define MYBANKACCOUNT_H

//Or you can use #pragma once
#include <iostream>

class myBankAccount
{
private:
    std::string name;
    double balance = 0;
    bool isChecking = false;
    double loan = 0;
    /*time_t curr_time;
    tm* curr_tm;
    char date_string[100];
    char time_string[100];*/


public:
    myBankAccount();
    myBankAccount(std::string nm);
    myBankAccount(std::string nm, double x, int y);
    void setName(std::string nm);
    void setBalance(double x);
    void setChecking(int x);
    void getName();
    void getBalance();
    void getChecking();
    void getAllInfo();
    void deposit(double y);
    double charges(double x);
    void withdraw(double x);
    double getInterest(double ln);
    void getLoan(double ln);
};

#endif

