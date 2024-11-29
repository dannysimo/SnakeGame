#ifndef BOARD_HPP
#define BOARD_HPP

#include "point.hpp"

class Board {
public:
    int width, height;

    Board(int width, int height);
    bool isWithinBounds(const Point& p) const;
};

#endif // BOARD_HPP