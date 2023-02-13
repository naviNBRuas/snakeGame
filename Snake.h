#pragma once

#include <vector>
#include "Constants.h"

enum class Direction
{
    UP,
    DOWN,
    LEFT,
    RIGHT,
    NONE
};

class Snake
{
public:
    Snake();

    // Returns the current position of the snake
    std::vector<std::pair<int, int>> getPositions() const;

    // Moves the snake in the current direction
    void move();

    // Changes the direction of the snake
    void changeDirection(Direction direction);

    // Adds a new block to the end of the snake
    void grow();

    // Checks if the snake has collided with itself
    bool checkSelfCollision() const;

private:
    std::vector<std::pair<int, int>> positions; // The position of each block of the snake
    Direction direction; // The current direction of the snake
};
