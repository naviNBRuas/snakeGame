#include "Input.h"
#include <conio.h>

Input::Input()
{
    direction = Direction::RIGHT;
}

Direction Input::getDirection() const
{
    return direction;
}

void Input::updateDirection()
{
    if (_kbhit())
    {
        int ch = _getch();
        switch (ch)
        {
        case 72:
            direction = Direction::UP;
            break;
        case 80:
            direction = Direction::DOWN;
            break;
        case 75:
            direction = Direction::LEFT;
            break;
        case 77:
            direction = Direction::RIGHT;
            break;
        }
    }
}
