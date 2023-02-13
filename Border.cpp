#include "Border.h"

Border::Border()
{
    // Initialize the border as a vector of pairs of integers
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        border.push_back({ 0, i });
        border.push_back({ BOARD_SIZE - 1, i });
        border.push_back({ i, 0 });
        border.push_back({ i, BOARD_SIZE - 1 });
    }
}

std::vector<std::pair<int, int>> Border::getBorder() const
{
    return border;
}
