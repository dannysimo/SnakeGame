/**
 * @file apple.hpp
 * @brief Definește clasa Apple utilizată în jocul SnakeGame.
 * @author Rotaru Daniel
 * @date 2024
 */

#ifndef APPLE_HPP
#define APPLE_HPP

#include "point.hpp"

/**
 * @class Apple
 * @brief Reprezintă obiectul măr din joc.
 */
class Apple {
public:
    /// Poziția actuală a mărului.
    Point position;

    /**
     * @brief Constructor pentru clasa Apple.
     * @param x Coordonata x inițială a mărului. Valoare implicită: 0.
     * @param y Coordonata y inițială a mărului. Valoare implicită: 0.
     */
    Apple(int x = 0, int y = 0);

    /**
     * @brief Relocalizează mărul la o poziție aleatorie nouă.
     * @param maxX Coordonata x maximă pentru relocalizare.
     * @param maxY Coordonata y maximă pentru relocalizare.
     */
    void relocate(int maxX, int maxY);
};

#endif // APPLE_HPP