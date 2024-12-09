/**
 * @file snake.hpp
 * @brief Definește clasa Snake utilizată în jocul SnakeGame.
 * @author 
 * @date 2024
 */

#ifndef SNAKE_HPP
#define SNAKE_HPP

#include <vector>
#include "point.hpp"

/**
 * @class Snake
 * @brief Reprezintă șarpele din joc.
 */
class Snake {
public:
    /// Corpul șarpelui, reprezentat ca o listă de puncte.
    std::vector<Point> body;

    /**
     * @brief Constructor pentru clasa Snake.
     * @param startX Poziția inițială pe axa x.
     * @param startY Poziția inițială pe axa y.
     */
    Snake(int startX, int startY);

    /**
     * @brief Deplasează șarpele într-o direcție specificată.
     * @param direction Direcția în care se deplasează șarpele.
     */
    void move(const Point& direction);

    /**
     * @brief Verifică dacă șarpele se lovește de propriul corp.
     * @return `true` dacă șarpele s-a lovit, `false` altfel.
     */
    bool isCollidingWithSelf() const;
};

#endif // SNAKE_HPP