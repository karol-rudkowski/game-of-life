#include "Game.h"
#include <iostream>
#include <windows.h>

using namespace std;

void Game::Play() {
    while (true) {
        analise();
        view();
        Sleep(500);
        system("cls");
    }
}
