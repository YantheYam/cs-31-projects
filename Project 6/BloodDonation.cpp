#include "BloodDonation.h"

// constructor
BloodDonation::BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight) {
    string temp = to_string(EmployeeID);
    if (temp.size() == 6 && EmployeeID > 0)
        mID = EmployeeID;
    else
        mID = -1;

    if (21 <= EmployeeAge && EmployeeAge <= 65)
        mAge = EmployeeAge;
    else
        mAge = -1;

    if (101 <= EmployeeWeight && EmployeeWeight <= 280)
        mWeight = EmployeeWeight;
    else
        mWeight = -1;
}

// getters
int BloodDonation::getID() {
    return mID;
}

int BloodDonation::getAge() {
    return mAge;
}

double BloodDonation::getWeight() {
    return mWeight;
}

// setters
void BloodDonation::setID(int id) {
    string temp = to_string(id);
    if (temp.size() == 6 && id > 0)
        mID = id;
    else
        mID = -1;
}

void BloodDonation::setAge(int age) {
    if (21 <= age && age <= 65)
        mAge = age;
    else
        mAge = -1;    
}

void BloodDonation::setWeight(double weight) {
    if (101 <= weight && weight <= 280)
        mWeight = weight;
    else
        mWeight = -1;
}


