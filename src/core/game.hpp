/*
    游戏主体逻辑
*/

#pragma once
#include "map.hpp"
#include "player.hpp"

namespace gen::core {

class Game {
private:
    int R, C;
    GameMap map;
    int currentTurn;
    PlayerRegistry playerRegistry;
public:
    Game(int rows, int cols);
};


}