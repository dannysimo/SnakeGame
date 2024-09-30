#include "Board.hpp"

Board::Board(int w, int h) : width(w), height(h) {}

int Board::GetWidth() const {
    return width;
}

int Board::GetHeight() const {
    return height;
}

bool Board::IsOutOfBounds(const Point& point) const {
    return point.x < 0 || point.x >= width || point.y < 0 || point.y >= height;
}