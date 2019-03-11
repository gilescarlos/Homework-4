// ParkingMeter.cpp

#include<iostream>

using namespace std;

#include"ParkingMeter.h"


ParkingMeter::ParkingMeter() { setMinutesPurchased(0.0); }

ParkingMeter::ParkingMeter(double aMinForParking) { setMinutesPurchased(aMinForParking); }

void ParkingMeter::setMinutesPurchased(int minutes) { minutesPurchased = minutes; }

double ParkingMeter::getMinutesPurchased() const { return minutesPurchased; }
