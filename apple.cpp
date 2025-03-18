#include "apple.hpp"
#include <cstdlib>

Apple::Apple(int x, int y) : position(x, y) {}

void Apple::relocate(int maxX, int maxY) {
    position.x = rand() % maxX;
    position.y = rand() % maxY;
}