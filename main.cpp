#include <iostream>
#include "Dice.h"

using namespace std;

int main() {
    Dice dice1, dice2;
    int playerTotal = 0;
    int computerTotal = 0;

    while(true){
        int answer;
        cout << "Do you want to roll dice and accumulate points? (1 - yes; 2 - no): ";
        cin >> answer;

        if (answer != 1)
            break;

        dice1.roll();
        dice2.roll();
        computerTotal += dice1.getValue() + dice2.getValue();

        dice1.roll();
        dice2.roll();
        playerTotal += dice1.getValue() + dice2.getValue();

        cout << "Your current total is " << playerTotal << "\n\n";

        if (playerTotal > 21 || computerTotal > 21)
            break;
    }

    cout << "Your total: " << playerTotal << "\n";
    cout << "Computer total: " << computerTotal << "\n\n";

    if ((playerTotal <= 21 && playerTotal == computerTotal) || (playerTotal > 21 && computerTotal > 21)){
        cout << "Match tie.\n";
    } else if (playerTotal <= 21 && playerTotal > computerTotal){
        cout << "You win!\n";
    } else {
        cout << "You lose.\n";
    }

    return 0;
}