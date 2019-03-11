//
// Created by Giles Pierre Carlos on 2019-03-11.
//

#include "Dice.h"
#include <cstdlib> // For rand and srand
#include <ctime> // For the time function

using namespace std;

Dice::Dice(int numSides) {
    // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    // Set the number of sides.
    sides = numSides;

    // Perform an initial roll.
    roll();
}

void Dice::roll() {
    // Constant for the minimum die value
    const int MIN_VALUE = 1; // Minimum die value

    // Get a random value for the die.
    value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}

int Dice::getSides() { return sides; }

int Dice::getValue() { return value; }