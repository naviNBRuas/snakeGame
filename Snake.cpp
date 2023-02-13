#include "Snake.h"

Snake::Snake()
{
    // Initialize the snake with one block in the center of the board
    positions.push_back({ BOARD_SIZE / 2, BOARD_SIZE / 2 });
    direction = Direction::UP;
}

std::vector<std::pair<int, int>> Snake::getPositions() const
{
    return positions;
}

void Snake::move()
{
    // Add a new block in the direction of the snake
    int x = positions.front().first + dx[direction];
    int y = positions.front().second + dy[direction];
    positions.insert(positions.begin(), { x, y });

    // Remove the last block
    positions.pop_back();
}

void Snake::changeDirection(Direction newDirection)
{
    direction = newDirection;
}

void Snake::grow()
{
    // Add a new block to the end of the snake in the same direction as the current direction
    int x = positions.back().first + dx[direction];
    int y = positions.back().second + dy[direction];
    positions.push_back({ x, y });
}

bool Snake::checkSelfCollision() const
{
    // Check if the head of the snake is at the same position as any other block of the snake
    int x = positions.front().first;
    int y = positions.front().second;
    for (int i = 1; i < positions.size(); i++)
    {
        if (positions[i].first == x && positions[i].second == y)
        {
            return true;
        }
    }

    return false;
}
