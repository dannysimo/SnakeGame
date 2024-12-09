/**
 * @file board.hpp
 * @brief Definește clasa Board care gestionează tabla de joc SnakeGame.
 * @author Rotaru Daniel
 * @date 2024
 */

#ifndef BOARD_HPP
#define BOARD_HPP

#include "point.hpp"

/**
 * @class Board
 * @brief Reprezintă tabla de joc și limitele acesteia.
 */
class Board {
public:
    /// Lățimea tablei de joc.
    int width;

    /// Înălțimea tablei de joc.
    int height;

    /**
     * @brief Constructor pentru clasa Board.
     * @param width Lățimea tablei.
     * @param height Înălțimea tablei.
     */
    Board(int width, int height);

    /**
     * @brief Verifică dacă un punct se află în limitele tablei de joc.
     * @param p Punctul verificat.
     * @return `true` dacă punctul este în limite, `false` altfel.
     */
    bool isWithinBounds(const Point& p) const;
};

#endif // BOARD_HPP