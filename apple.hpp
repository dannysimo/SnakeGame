#ifndef APPLE_HPP
#define APPLE_HPP

#include "point.hpp"

class Apple {
public:
    Point position;

    Apple(int x = 0, int y = 0);
    void relocate(int maxX, int maxY);
};

#endif // APPLE_HPP