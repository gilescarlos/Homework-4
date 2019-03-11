// MAIN.cpp

#include<iostream>
#include<stdio.h>

using namespace std;

#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"ParkingTicket.h"
#include"PoliceOfficer.h"

int main() {
    bool status;

    ParkingMeter meter;
    ParkedCar car;
    PoliceOfficer officer;
    string col;
    string mk;
    string mod;
    string lic;
    string name;
    int badge;
    int minutesParked;
    int purchasedMin;


    cout << "OFFICER INFORMATION:" << endl;
    cout << "Name of Officer: ";
    getline(cin, name);
    officer.setOfficerName(name);

    cout << "Badge Number: ";
    cin >> badge;
    officer.setBadgeNumber(badge);

    cout << "\nCAR INFORMATION:" << endl;
    cout << "Car's Make: ";
    cin >> mk;
    car.setMake(mk);

    cout << "Car's Model: ";
    cin >> mod;
    getline(cin, mod);
    car.setModel(mod);

    cout << "Car's Color: ";
    cin >> col;
    car.setColor(col);

    cout << "Car's License Number: ";
    cin >> lic;
    car.setLicenseNumber(lic);

    cout << "\nNumber of minutes the car is parked: ";
    cin >> minutesParked;
    car.setMinutesParked(minutesParked);

    cout << "Number of minutes purchased for parking: ";
    cin >> purchasedMin;
    meter.setMinutesPurchased(purchasedMin);

    status = officer.patrol(car.getMinutesParked(), meter.getMinutesPurchased());

    if (status == false) {
        ParkingTicket *pt = new ParkingTicket();
        pt->print(car, meter, officer);
    } else {
        cout << "Car is Legally Parked.";
    }

    return 0;

}