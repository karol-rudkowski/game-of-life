#ifndef GAME_H
#define GAME_H

#include "Engine.h"

class Game : public Engine {
public:
    void Play();
protected:
    Game() : Engine() {};
    virtual void view() = 0;
private:
    Game(const Game& obj) = delete;
    Game& operator=(const Game& obj) = delete;
};

#endif //GAME_H
