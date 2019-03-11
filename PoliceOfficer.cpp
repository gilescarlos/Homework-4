// PoliceOfficer.cpp

#include<iostream>
#include<string>

using namespace std;

#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"ParkingTicket.h"
#include"PoliceOfficer.h"

PoliceOfficer::PoliceOfficer()
{
    setOfficerName("");
    setBadgeNumber(0);
}

PoliceOfficer::PoliceOfficer(string aOfficerName, int aBadgeNumber)
{
    setOfficerName(aOfficerName);
    setBadgeNumber(aBadgeNumber);
}

void PoliceOfficer::setOfficerName(string aOfficerName) { officerName = aOfficerName; }

void PoliceOfficer::setBadgeNumber(int aBadgeNumber) { badgeNumber = aBadgeNumber; }

string PoliceOfficer::getOfficerName() const { return officerName; }

int PoliceOfficer::getBadgeNumber() const { return badgeNumber; }

bool PoliceOfficer::patrol(double purchasedTime, double parkedTime)
{
    if (parkedTime > purchasedTime) {
        return true;
    } else {
        return false;
    }
}
