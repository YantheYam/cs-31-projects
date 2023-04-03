#include "VacationAccount.h"

// constructor
VacationAccount::VacationAccount(int EmployeeID) {
    string temp = to_string(EmployeeID);
    if (temp.size() == 6 && EmployeeID > 0)
        mID = EmployeeID;
    else
        mID = -1;
    mBalance = 0;
}

// getters
int VacationAccount::getID() {
    return mID;
}

double VacationAccount::getBalance() {
    return mBalance;
}

// setter?
bool VacationAccount::addVacationToAccount(BloodDonation donation) {
    if (donation.getID() == mID && donation.getID() != -1 && donation.getAge() != -1 && donation.getWeight() != -1) {
        mBalance += 4;
        return true;
    } else
        return false;
}
