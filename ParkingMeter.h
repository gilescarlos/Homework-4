// ParkingMeter.h

#pragma once

#include<iostream>

using namespace std;

class ParkingMeter {
private:

    int minutesPurchased;

public:
    ParkingMeter();
    ParkingMeter(double aMinForParking); // Parameter Constructor

    // Mutator
    void setMinutesPurchased(int minutes);

    // Accessor
    double getMinutesPurchased() const;
};



