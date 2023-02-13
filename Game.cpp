#include "Game.h"
#include "Snake.h"
#include "Fruit.h"
#include "Border.h"
#include "Input.h"

#include <iostream>

void Game::start()
{
    Snake snake;
    Fruit fruit;
    Border border;
    Input input;

    while (true)
    {
        input.updateDirection();
        Snake::Direction direction = input.getDirection();
        if (direction != Snake::Direction::NONE)
        {
            snake.update(direction);
        }

        if (snake.checkCollision(border.getBody()))
        {
            break;
        }

        if (snake.checkCollision(fruit.getBody()))
        {
            fruit.spawn();
            snake.increaseLength();
        }

        snake.update();
        border.draw();
        fruit.draw();
        snake.draw();
    }

    std::cout << "Game Over!" << std::endl;
}
