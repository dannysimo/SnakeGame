#include "board.hpp"

Board::Board(int width, int height) : width(width), height(height) {}

bool Board::isWithinBounds(const Point& p) const {
    return p.x >= 0 && p.x < width && p.y >= 0 && p.y < height;
}