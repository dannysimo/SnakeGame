/**
 * @file point.cpp
 * @brief Implementarea funcțiilor clasei Point utilizată în SnakeGame.
 * @author Rotaru Daniel
 * @date 2024
 */

#include "point.hpp"

/**
 * @brief Constructor pentru clasa Point.
 * @param x Coordonata x inițială.
 * @param y Coordonata y inițială.
 */
Point::Point(int x, int y) : x(x), y(y) {}

/**
 * @brief Deplasează punctul cu valori date.
 * @param dx Deplasarea pe axa x.
 * @param dy Deplasarea pe axa y.
 */
void Point::move(int dx, int dy) {
    x += dx;
    y += dy;
}

/**
 * @brief Supraincarcă operatorul de afișare pentru punct.
 * @param os Stream-ul de ieșire.
 * @param p Punctul de afișat.
 * @return Stream-ul de ieșire.
 */
std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

/**
 * @brief Supraincarcă operatorul de citire pentru punct.
 * @param is Stream-ul de intrare.
 * @param p Punctul în care se citește valoarea.
 * @return Stream-ul de intrare.
 */
std::istream& operator>>(std::istream& is, Point& p) {
    is >> p.x >> p.y;
    return is;
}