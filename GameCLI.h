#ifndef GAMECLI_H
#define GAMECLI_H

#include "Game.h"

class GameCLI : public Game {
public:
    GameCLI() : Game() {};
    virtual void  view() override;
private:
    GameCLI(const GameCLI& obj) = delete;
    GameCLI& operator=(const GameCLI& obj) = delete;
};

#endif //GAMECLI_H
