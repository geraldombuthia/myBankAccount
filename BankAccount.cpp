// BankAccount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <ctime>
#include "myBankAccount.h"

int main()
{
    myBankAccount obj1;
    myBankAccount obj2("Gerald", 1400, 1);

    obj2.getName();
    obj2.getBalance();
    obj2.getChecking();



    std::cout << "---------" << std::endl;

    obj1.setName("Gerald");
    obj1.getName();
    obj1.setBalance(12000.76);
    obj1.getBalance();
    obj1.setChecking(1);
    obj1.getChecking();
    /*obj1.setDate(); //Errors present
    obj1.getDate();*/
    obj1.getAllInfo();
    obj1.deposit(200);
    obj1.withdraw(2000);
    obj1.getLoan(30000);
}
