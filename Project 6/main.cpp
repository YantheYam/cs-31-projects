#include "BloodDonation.h"
#include "VacationAccount.h"
#include <iostream>
#include <cassert>
using namespace std;

int main() {
    // BloodDonation donations
    BloodDonation Bob(123456, 25, 150.00);
    BloodDonation Lob(12345, 25, 150.00);
    BloodDonation Drob(1234567, 25, 150.00);
    BloodDonation Cob(-123456, 25, 150.00);
    BloodDonation Young(123456, 20, 150.00);
    BloodDonation Old(123456, 66, 150.00);
    BloodDonation Small(123456, 25, 100.99);
    BloodDonation Big(123456, 25, 280.01);
    BloodDonation SetterTest1(123456, 25, 150.00);
    BloodDonation SetterTest2(123456, 25, 150.00);
    BloodDonation SetterTest3(123456, 25, 150.00);

    // checking constructor
    // check if valid parameters leads to valid object
    assert(Bob.getID() == 123456);
    assert(Bob.getAge() == 25);
    assert(Bob.getWeight() == 150.00);
    // invalid ID length
    assert(Lob.getID() == -1);
    assert(Drob.getID() == -1);
    // negative ID number
    assert(Cob.getID() == -1);
    // age too low
    assert(Young.getAge() == -1);
    // age too high
    assert(Old.getAge() == -1);
    // weight too low
    assert(Small.getWeight() == -1);
    // weight too high
    assert(Big.getWeight() == -1);

    // checking setters
    // check if valid id leads to id getting changed
    SetterTest1.setID(100000);
    assert(SetterTest1.getID() == 100000);
    // invalid ID length
    SetterTest1.setID(10000);
    assert(SetterTest1.getID() == -1);
    SetterTest2.setID(1000000);
    assert(SetterTest1.getID() == -1);
    // negative ID number
    SetterTest3.setID(-100000);
    assert(SetterTest1.getID() == -1);

    // check if valid age leads to age getting changed
    SetterTest1.setAge(35);
    assert(SetterTest1.getAge() == 35);
    // age too low
    SetterTest1.setAge(2);
    assert(SetterTest1.getAge() == -1);
    // age too high
    SetterTest2.setAge(500000);
    assert(SetterTest2.getAge() == -1);

    // check if valid weight leads to weight getting changed
    SetterTest1.setWeight(140.00);
    assert(SetterTest1.getWeight() == 140.00);
    // weight too low
    SetterTest1.setWeight(51.00);
    assert(SetterTest1.getWeight() == -1);
    // weight too high
    SetterTest2.setWeight(21512.00);
    assert(SetterTest2.getWeight() == -1);


    // VacationAccount accounts
    VacationAccount account1(123456);
    VacationAccount account2(12345);
    VacationAccount account3(1234567);
    VacationAccount account4(-123456);

    // checking constructor
    // check if valid id number leads to valid object
    assert(account1.getID() == 123456);
    assert(account1.getBalance() == 0);
    // id too small
    assert(account2.getID() == -1);
    assert(account2.getBalance() == 0);
    // id too big
    assert(account3.getID() == -1);
    assert(account3.getBalance() == 0);
    // id negative
    assert(account4.getID() == -1);
    assert(account4.getBalance() == 0);

    // checking addVacationToAccount
    // check that if donation is valid, vacation is added
    assert(account1.addVacationToAccount(Bob) == true);
    assert(account1.getBalance() == 4);
    // check that if donation is valid, more vacation is added
    assert(account1.addVacationToAccount(Bob) == true);
    assert(account1.getBalance() == 8);
    // check that if id numbers don't match, vacation is not added
    assert(account1.addVacationToAccount(Lob) == false);
    assert(account1.getBalance() == 8);
    // check that if both id numbers are -1, vacation is not added
    assert(account2.addVacationToAccount(Lob) == false);
    assert(account2.getBalance() == 0);
    // check that if age is -1, vacation is not added
    assert(account1.addVacationToAccount(Young) == false);
    assert(account1.getBalance() == 8);
    // check that if weight is -1, vacation is not added
    assert(account1.addVacationToAccount(Big) == false);
    assert(account1.getBalance() == 8);

    cerr << "All asserts passed";
    return 0;    
    }
