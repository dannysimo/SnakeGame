#include "snake.hpp"

Snake::Snake(int startX, int startY) {
    body.emplace_back(startX, startY);
}

void Snake::move(const Point& direction) {
    for (int i = body.size() - 1; i > 0; --i) {
        body[i] = body[i - 1];
    }
    body[0].x += direction.x;
    body[0].y += direction.y;
}

bool Snake::isCollidingWithSelf() const {
    const Point& head = body[0];
    for (size_t i = 1; i < body.size(); ++i) {
        if (body[i].x == head.x && body[i].y == head.y) {
            return true;
        }
    }
    return false;
}