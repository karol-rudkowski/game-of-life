#ifndef ENGINE_H
#define ENGINE_H

#include "Array.h"

class Engine {
protected:
    Engine();  //loads data from file (array size, number of active cells, coordinates of active cells), creates array
    ~Engine();
    Engine(const Engine& obj) = delete;
    Engine& operator=(const Engine& obj) = delete;

    void analise(); //analiseCell, decide, copy temp to tab
    bool getTab(int w, int k);
    Array* tab;
    Array* temp;
    int rows;
    int cols;
private:
    int analiseCell(int w, int k); //returns number of active neighbors of the cell
    bool decide(int alive, int w, int k); //decide if the cell will be active, and write to temp
};

#endif //ENGINE_H
