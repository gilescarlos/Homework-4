// ParkingTicket.cpp

#include<iostream>
#include<string>

using namespace std;

#include"ParkedCar.h"
#include"ParkingTicket.h"
#include"PoliceOfficer.h"

ParkingTicket::ParkingTicket() { setFine(0.0); }

ParkingTicket::ParkingTicket(double aFine) { setFine(aFine); }

void ParkingTicket::setFine(double aFine) { fine = aFine; }

double ParkingTicket::getFine() const { return fine; }

void ParkingTicket::print(ParkedCar aParkedCar, ParkingMeter aParkingMeter, PoliceOfficer aPoliceOfficer) {
    cout << "\n";

    cout << "Details of illegally parked car:" << endl;
    cout << "Car's Make: " << aParkedCar.getMake() << endl;
    cout << "Car's Model: " << aParkedCar.getModel() << endl;
    cout << "Car's Color: " << aParkedCar.getColor() << endl;
    cout << "Car's License Number: " << aParkedCar.getLicenseNumber() << endl;


    illegallyParkedHr = ((aParkedCar.getMinutesParked() - aParkingMeter.getMinutesPurchased()) / 60) + 1;

    if (illegallyParkedHr <= 1) {
        setFine(25);
    } else {
        setFine(25 + ((illegallyParkedHr - 1) * 10));
    }

    cout << "\n";
    cout << "Fine is: $" << getFine() << endl;
    cout << "Name of Police Officer: " << aPoliceOfficer.getOfficerName() << endl;
    cout << "Badge Name: " << aPoliceOfficer.getBadgeNumber() << endl;

}
