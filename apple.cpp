#include "Apple.hpp"

Apple::Apple() : position(0, 0) {}

Apple::Apple(const Point &pos) : position(pos) {}

Point Apple::GetPosition() const {
    return position;
}