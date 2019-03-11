
#pragma once

#include<iostream>

using namespace std;

class ParkedCar
{
private:

    string make;
    string model;
    string color;
    string licenseNumber;
    int minutesParked;

public:
    ParkedCar();
    ParkedCar(string make, string model, string color, string licenseNumber, int minutes);

    // Mutators
    void setMake(string make);
    void setModel(string model);
    void setColor(string color);
    void setLicenseNumber(string licenseNumber);
    void setMinutesParked(int minutes);

    // Accessor
    string getMake() const;
    string getModel() const;
    string getColor() const;
    string getLicenseNumber() const;
    int getMinutesParked() const;

    void print() const;

};

