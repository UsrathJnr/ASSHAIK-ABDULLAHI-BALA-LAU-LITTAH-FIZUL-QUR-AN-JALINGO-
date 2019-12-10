#ifndef SNAKE_H
#define SNAKE_H

#include <vector>

enum class Direction
{
    Up = 0,
    Down = 1,
    Left = 2,
    Right = 3,
};

class SnakeBody
{
public:
    SnakeBody();
    SnakeBody(int x, int y);
    int getX() const;
    int getY() const;
    bool operator == (const SnakeBody& snakeBody);
private:
    int mX;
    int mY;
};

// Snake class should have no depency on the GUI library
class Snake
{
public:
    Snake(int gameBoardWidth, int gameBoardHeight);
    // Set random seed
    // void setRandomSeed(unsigned int seed);
    // Initialize snake
    void initializeSnake();
    // Check if the snake is on the coordinate
    // bool isSnakeOn(int x, int y);
    // Checking API for generating random food
    bool isPartOfSnake(int x, int y);
    // Check if hit wall
    void senseFood(SnakeBody food);
    bool hitWall();
    bool touchFood();
    bool hitSelf();
    // Grow
    bool grow();
    //bool setDirection(Direction direction);
    bool changeDirection(Direction newDirection);
    std::vector<SnakeBody>& getSnake();
    // 
    void resetSnake();



    bool moveFoward();

private:
    const int mGameBoardWidth;
    const int mGameBoardHeight;
    // Snake information
    const int mInitialSnakeLength = 2;
    Direction mDirection;
    SnakeBody mFood;
    std::vector<SnakeBody> mSnake;
};


#endif