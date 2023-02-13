#pragma once

#include "Snake.h"
#include "Fruit.h"
#include "Border.h"
#include "Input.h"

class Game
{
public:
    Game();

    // Starts the game loop
    void start();

private:
    Snake snake; // The snake
    Fruit fruit; // The fruit
    Border border; // The border
    Input input; // The input handler

    // Updates the game state
    void update();

    // Renders the game state
    void render();

    // Check if the game is over
    bool isGameOver();
};
