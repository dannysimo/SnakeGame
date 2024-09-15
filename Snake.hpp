#pragma once

#include "Point.hpp"
#include "Board.hpp"

enum class MoveDirection {
    Up, Down, Left, Right
};

class Snake {
    Point body[100];
    int size;
    Board& gameBoard;

public:
    Snake(Board& board);
    void Update(MoveDirection direction);
    void Extend();
    Point GetHead() const;
    bool Collides() const;
};

Snake::Snake(Board& board) : gameBoard(board), size(1) {
    body[0] = Point(5, 5);
}

void Snake::Update(MoveDirection direction) {
    Point newHead = body[0];

    switch (direction) {
        case MoveDirection::Up:    newHead.y--; break;
        case MoveDirection::Down:  newHead.y++; break;
        case MoveDirection::Left:  newHead.x--; break;
        case MoveDirection::Right: newHead.x++; break;
    }

    for (int i = size - 1; i > 0; --i) {
        body[i] = body[i - 1];
    }

    body[0] = newHead;
}

void Snake::Extend() {
    if (size < 100) {
        body[size] = body[size - 1];
        size++;
    }
}

Point Snake::GetHead() const {
    return body[0];
}

bool Snake::Collides() const {
    const Point& head = GetHead();
    if (gameBoard.OutOfBounds(head)) {
        return true;
    }
    for (int i = 1; i < size; ++i) {
        if (body[i].x == head.x && body[i].y == head.y) {
            return true;
        }
    }
    return false;
}