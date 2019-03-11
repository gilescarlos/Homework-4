// PoliceOfficer.h

#pragma once

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"ParkingTicket.h"

class PoliceOfficer
{
private:

    string officerName;
    int badgeNumber;

public:
    PoliceOfficer(); // Default Constructor
    PoliceOfficer(string aOfficerName, int aBadgeNumber); // Parameter Constructor

    // Mutators
    void setOfficerName(string aOfficerName);
    void setBadgeNumber(int aBadgeNumber);

    // Accessors
    string getOfficerName() const;
    int getBadgeNumber() const;

    bool patrol(double purchasedTime, double parkedTime);

};

