#pragma once
#include "Snake.hpp"
#include "Apple.hpp"

class GameEngine {
    Snake snake;
    Apple apple;
    Board board;

public:
    GameEngine();
    void Init(); // Inițializare joc
    void Run();  // Bucla principală a jocului
};