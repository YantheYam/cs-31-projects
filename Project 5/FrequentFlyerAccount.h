#ifndef FrequentFlyerAccount_H
#define FrequentFlyerAccount_H

#include "PlaneFlight.h"
#include <iostream>
using namespace std;

class FrequentFlyerAccount {
    private:
        string mName;
        double mBalance;

    public:
        // constructor
        FrequentFlyerAccount(string name);

        // getters
        double getBalance();
        string getName();

        // setters?
        bool addFlightToAccount(PlaneFlight flight);
        bool canEarnFreeFlight(double mileage);
        bool freeFlight(string from, string to, double mileage, PlaneFlight& flight);
};

#endif
