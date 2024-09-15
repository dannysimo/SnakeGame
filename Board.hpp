#pragma once

class Board {
    int width;
    int height;

public:
    Board(int w, int h); 
    int GetWidth() const; 
    int GetHeight() const; 
    bool IsOutOfBounds(const Point& point) const;
};

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