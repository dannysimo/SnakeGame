#pragma once
#include "Point.hpp"

class Apple {
    Point position;

public:
    Apple(); 
    Apple(const Point &pos); 
    Point GetPosition() const; 
};