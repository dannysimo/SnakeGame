/**
 * @file point.hpp
 * @brief Definește structura Point utilizată pentru coordonatele din SnakeGame.
 * @author Rotaru Daniel
 * @date 2024
 */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

/**
 * @class Point
 * @brief Reprezintă un punct în planul 2D.
 */
class Point {
public:
    /// Coordonata x a punctului.
    int x;

    /// Coordonata y a punctului.
    int y;

    /**
     * @brief Constructor pentru clasa Point.
     * @param x Coordonata x inițială. Valoare implicită: 0.
     * @param y Coordonata y inițială. Valoare implicită: 0.
     */
    Point(int x = 0, int y = 0);

    /**
     * @brief Deplasează punctul cu valori date.
     * @param dx Deplasarea pe axa x.
     * @param dy Deplasarea pe axa y.
     */
    void move(int dx, int dy);

    /// Supraincarcă operatorul de afișare.
    friend std::ostream& operator<<(std::ostream& os, const Point& p);

    /// Supraincarcă operatorul de citire.
    friend std::istream& operator>>(std::istream& is, Point& p);
};

#endif // POINT_HPP