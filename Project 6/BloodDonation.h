#ifndef BloodDonation_H
#define BloodDonation_H

#include <iostream>
using namespace std;

class BloodDonation {
    private:
        int mID;
        int mAge;
        double mWeight;

    public:
        // constructor
        BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight);

        // getters
        int getID();
        int getAge();
        double getWeight();

        // setters
        void setID(int id);
        void setAge(int age);
        void setWeight(double weight);
};

#endif
