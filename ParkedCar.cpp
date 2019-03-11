// ParkedCar.cpp

#include<iostream>
#include<string>

using namespace std;

#include"ParkedCar.h"

ParkedCar::ParkedCar()
{
    setMake(" ");
    setModel(" ");
    setColor(" ");
    setLicenseNumber(" ");
    setMinutesParked(0);
}

ParkedCar::ParkedCar(string make, string model, string color, string licenseNumber, int minutes)
{
    setMake(make);
    setModel(model);
    setColor(color);
    setLicenseNumber(licenseNumber);
    setMinutesParked(minutes);
}

void ParkedCar::setMake(string mk) { make = mk; }

void ParkedCar::setModel(string mod) { model = mod; }

void ParkedCar::setColor(string col) { color = col; }

void ParkedCar::setLicenseNumber(string ln) { licenseNumber = ln; }

void ParkedCar::setMinutesParked(int min) { minutesParked = min; }

string ParkedCar::getMake() const { return make; }

string ParkedCar::getModel() const { return model; }

string ParkedCar::getColor() const { return color; }

string ParkedCar::getLicenseNumber() const { return licenseNumber; }

int ParkedCar::getMinutesParked() const { return minutesParked; }

void ParkedCar::print() const {
    cout << "Make: " <<  getMake() << endl;
    cout << "Model :" << getModel() << endl;
    cout << "Color :" << getColor() << endl;
    cout << "License Number :" << getLicenseNumber() << endl;
    cout << "Minutes Parked :" << getMinutesParked() << endl;

}
