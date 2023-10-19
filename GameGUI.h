#ifndef GAMEGUI_H
#define GAMEGUI_H

#include "Game.h"

class GameGUI : public Game {
public:
    virtual void view();
private:
    GameGUI(const GameGUI& obj) = delete;
    GameGUI& operator=(const GameGUI& obj) = delete;
};

#endif //GAMEGUI_H
