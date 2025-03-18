#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point {
public:
    int x, y;

    Point(int x = 0, int y = 0);
    void move(int dx, int dy);
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
    friend std::istream& operator>>(std::istream& is, Point& p);
};

#endif // POINT_HPP