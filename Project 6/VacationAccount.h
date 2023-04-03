#ifndef VacationAccount_H
#define VacationAccount_H

#include "BloodDonation.h"
#include <iostream>
using namespace std;

class VacationAccount {
    private:
        int mID;
        double mBalance;

    public:
        // constructor
        VacationAccount(int EmployeeID);
        
        // getters
        double getBalance();
        int getID();

        // setter?
        bool addVacationToAccount(BloodDonation donation);
};

#endif
