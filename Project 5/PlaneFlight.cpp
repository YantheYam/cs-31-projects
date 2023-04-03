#include "PlaneFlight.h"

// constructor
PlaneFlight::PlaneFlight(string passengerName, string fromCity, string toCity, double cost, double mileage) {
    if (passengerName != "") // check if passengerName isn't empty
        mName = passengerName;
    if (fromCity != "" && fromCity != toCity) // check if fromCity isn't empty and also doesn't match toCity
        mFromCity = fromCity;
    if (toCity != "" && toCity != fromCity) // check if toCity isn't empty and also doesn't match fromCity
        mToCity = toCity;
    if (cost >= 0) // check if cost is valid
        mCost = cost;
    else
        mCost = -1;
    if (mileage > 0) // check if mileage is valid
        mMileage = mileage;
    else
        mMileage = -1;
    }

// getters
double PlaneFlight::getCost() {
    return mCost;
}

double PlaneFlight::getMileage() {
    return mMileage;
}

string PlaneFlight::getName() {
    return mName;
}

string PlaneFlight::getFromCity() {
    return mFromCity;
}

string PlaneFlight::getToCity() {
    return mToCity;
}

// setters
void PlaneFlight::setCost(double cost) {
    if (cost >= 0) // check if cost is valid
        mCost = cost;
    else
        mCost = -1;
}

void PlaneFlight::setMileage(double mileage) {
    if (mileage > 0) // check if mileage is valid
        mMileage = mileage;
    else
        mMileage = -1;
}

void PlaneFlight::setName(string name) {
    if (name != "") // check if input name isn't empty
        mName = name;
}

void PlaneFlight::setFromCity(string from) {
    if (from != "" && from != mToCity) // check if input fromCity doesn't match preexisting toCity
        mFromCity = from;
}

void PlaneFlight::setToCity(string to) {
    if (to != "" && to != mFromCity) // check if input toCity doesn't match preexisting fromCity
        mToCity = to;
}
