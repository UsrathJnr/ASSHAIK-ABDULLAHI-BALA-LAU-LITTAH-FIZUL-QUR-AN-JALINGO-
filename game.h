#ifndef GAME_H
#define GAME_H

#include <ncurses.h>
#include <vector>
#include "snake.h"

class Game
{
public:
    Game();
    void createInformationBoard();
    void createGameBoard();
    void createInstructionBoard();
    void createRamdonFood();
    void renderBoard();
    void renderSnake();
    void start();
    void renderTest();

private:
    // We need to have two windows
    // One is for game introduction
    // One is for game board
    int screenWidth;
    int screenHeight;
    int gameBoardWidth;
    int gameBoardHeight;
    const int snakeInitialLength = 2;
    const int informationHeight = 5;
    const int instructionWidth = 15;
    std::vector<WINDOW *> board;
    // Snake information
    const int initialSnakeLength = 2;
    const char snakeSymbol = '@';
    // Food information
    //SnakeBody food;
    const char foodSymbol = '#';
    
};

#endif