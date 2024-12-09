/**
 * @file apple.cpp
 * @brief Implementarea funcțiilor clasei Apple utilizată în SnakeGame.
 * @author Rotaru Daniel
 * @date 2024
 */

#include "apple.hpp"
#include <cstdlib>

/**
 * @brief Constructor pentru clasa Apple.
 * @param x Coordonata x inițială a mărului.
 * @param y Coordonata y inițială a mărului.
 */
Apple::Apple(int x, int y) : position(x, y) {}

/**
 * @brief Relocalizează mărul la o poziție aleatorie nouă.
 * @param maxX Coordonata x maximă pentru relocalizare.
 * @param maxY Coordonata y maximă pentru relocalizare.
 */
void Apple::relocate(int maxX, int maxY) {
    position.x = rand() % maxX;
    position.y = rand() % maxY;
}