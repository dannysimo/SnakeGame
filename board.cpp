/**
 * @file board.cpp
 * @brief Implementarea funcțiilor clasei Board pentru SnakeGame.
 * @author Rotaru Daniel
 * @date 2024
 */

#include "board.hpp"

/**
 * @brief Constructor pentru clasa Board.
 * @param width Lățimea tablei.
 * @param height Înălțimea tablei.
 */
Board::Board(int width, int height) : width(width), height(height) {}

/**
 * @brief Verifică dacă un punct se află în limitele tablei de joc.
 * @param p Punctul verificat.
 * @return `true` dacă punctul este în limite, `false` altfel.
 */
bool Board::isWithinBounds(const Point& p) const {
    return p.x >= 0 && p.x < width && p.y >= 0 && p.y < height;
}