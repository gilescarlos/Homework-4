//
// Created by Giles Pierre Carlos on 2019-03-11.
//

#ifndef GAMEOF21_DICE_H
#define GAMEOF21_DICE_H

class Dice {
private:
    int sides;
    int value;
public:
    Dice(int = 6);
    void roll();
    int getSides();
    int getValue();
};

#endif //GAMEOF21_DICE_H
