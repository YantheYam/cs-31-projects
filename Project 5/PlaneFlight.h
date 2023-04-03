#ifndef PlaneFlight_H
#define PlaneFlight_H

#include <iostream>
using namespace std;

class PlaneFlight {
    private:
        double mCost;
        string mFromCity;
        string mToCity;
        string mName;
        double mMileage;

    public:
        // constructor
        PlaneFlight(string passengerName, string fromCity, string toCity, double cost, double mileage);
        
        // getters
        double getCost();
        double getMileage();
        string getName();
        string getFromCity();
        string getToCity();

        // setters
        void setCost(double cost);
        void setMileage(double mileage);
        void setName(string name);
        void setFromCity(string from);
        void setToCity(string to);
};

#endif
