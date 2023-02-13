#include <iostream>
#include "Game.h"
#include "Constants.h"
#include "Snake.h"
#include "Fruit.h"
#include "Border.h"
#include "Input.h"

int main()
{
    // Create a game object
    Game game;

    // Initialize the game
    game.init();

    // Run the game loop
    while (!game.isOver())
    {
        // Clear the console
        std::cout << "\033[2J\033[1;1H";

        // Update the game
        game.update();

        // Display the game board
        game.display();

        // Sleep for a short time to control the game speed
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Game over message
    std::cout << "Game Over!" << std::endl;

    return 0;
}
