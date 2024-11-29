#ifndef SNAKE_HPP
#define SNAKE_HPP

#include <vector>
#include "point.hpp"

class Snake {
public:
    std::vector<Point> body;

    Snake(int startX, int startY);
    void move(const Point& direction);
    bool isCollidingWithSelf() const;
};

#endif // SNAKE_HPP