/**
 * @file main.cpp
 * @brief Punctul de intrare pentru jocul SnakeGame.
 * @author 
 * @date 2024
 */

#include <iostream>
#include "board.hpp"
#include "snake.hpp"
#include "apple.hpp"

int main() {
    Board board(20, 20);
    Snake snake(10, 10);
    Apple apple;

    apple.relocate(board.width, board.height);

    std::cout << "Poziția capului șarpelui: " << snake.body[0] << std::endl;
    std::cout << "Poziția mărului: " << apple.position << std::endl;

    return 0;
}