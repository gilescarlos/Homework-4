// ParkingTicket.h

#pragma once

#include<iostream>

using namespace std;

#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"PoliceOfficer.h"

class ParkingTicket
{
private:
    double fine;
    int illegallyParkedHr;

public:
    ParkingTicket(); // Constructor
    ParkingTicket(double aFine); // Parameter Constructor

    // Mutators
    void setFine(double aFine);

    // Accessors
    double getFine() const;

    // Print
    void print(ParkedCar aParkedCar, ParkingMeter aParkingMeter, PoliceOfficer aPoliceOfficer);

};
