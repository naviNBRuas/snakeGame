#pragma once

#include "Constants.h"

class Fruit
{
public:
    Fruit();

    // Returns the position of the fruit
    std::pair<int, int> getPosition() const;

    // Respawns the fruit at a new random position
    void respawn();

private:
    std::pair<int, int> position; // The position of the fruit
};
