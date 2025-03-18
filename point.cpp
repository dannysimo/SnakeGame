#include "point.hpp"

Point::Point(int x, int y) : x(x), y(y) {}

void Point::move(int dx, int dy) {
    x += dx;
    y += dy;
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Point& p) {
    is >> p.x >> p.y;
    return is;
}