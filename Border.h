#pragma once

#include "Constants.h"
#include <vector>

class Border
{
public:
    Border();

    // Returns the border as a vector of pairs of integers
    std::vector<std::pair<int, int>> getBorder() const;

private:
    std::vector<std::pair<int, int>> border; // The border as a vector of pairs of integers
};
