#pragma once

enum class Direction
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class Input
{
public:
    Input();

    // Returns the current direction of the snake
    Direction getDirection() const;

    // Sets the current direction of the snake based on user input
    void updateDirection();

private:
    Direction direction; // The current direction of the snake
};
