#include "FrequentFlyerAccount.h"

// constructor
FrequentFlyerAccount::FrequentFlyerAccount(string name) {
    mName = name;
    mBalance = 0;
}

// getters
double FrequentFlyerAccount::getBalance() {
    return mBalance;
}

string FrequentFlyerAccount::getName() {
    return mName;
}

// setters?
bool FrequentFlyerAccount::addFlightToAccount(PlaneFlight flight) {
    // check if flight's name matches account's name, if cost and mileage are valid, and if fromCity and toCity are valid
    if (flight.getName() == mName && flight.getCost() > 0 && flight.getMileage() > 0 && flight.getFromCity() != "" && flight.getToCity() != "" & flight.getFromCity() != flight.getToCity()) {
        mBalance += flight.getMileage();
        return true;
    } else
        return false;
}

bool FrequentFlyerAccount::canEarnFreeFlight(double mileage) {
    // check if mileage is above 0 and is below the balance stored in the account
    if (mileage > 0 && mileage <= mBalance)
        return true;
    else
        return false;
}

bool FrequentFlyerAccount::freeFlight(string from, string to, double mileage, PlaneFlight& flight) {
    // instead of having mileage checks in the if statement, I called the canEarnFreeFlight function
    if (canEarnFreeFlight(mileage) && from != "" && to != "" && from != to) {
        flight = PlaneFlight(mName, from, to, 0, mileage);
        mBalance -= mileage;
        return true;
    } else 
        return false;
}
