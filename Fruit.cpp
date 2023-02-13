#include "Fruit.h"
#include <random>

Fruit::Fruit()
{
    respawn();
}

std::pair<int, int> Fruit::getPosition() const
{
    return position;
}

void Fruit::respawn()
{
    // Generate a random position inside the border area
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> distributionX(1, BOARD_SIZE - 2);
    std::uniform_int_distribution<int> distributionY(1, BOARD_SIZE - 2);
    position = { distributionX(generator), distributionY(generator) };
}
