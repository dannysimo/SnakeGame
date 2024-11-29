#include <iostream>
#include "board.hpp"
#include "snake.hpp"
#include "apple.hpp"

int main() {
    Board board(20, 20);
    Snake snake(10, 10);
    Apple apple;

    apple.relocate(board.width, board.height);

    std::cout << "Snake head: " << snake.body[0] << std::endl;
    std::cout << "Apple position: " << apple.position << std::endl;

    return 0;
}