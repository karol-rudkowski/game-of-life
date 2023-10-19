#include <fstream>
#include "Engine.h"
#include <iostream>

using namespace std;


 Engine::Engine() {
     int cells, row, col;
     const char* fileName = "../init.txt";
     
     ifstream file(fileName);

     if (file.is_open()) {
         file >> rows;
         file >> cols;

         tab = new Array(rows, cols);
         temp = new Array(rows, cols);

         file >> cells;

         for (int i = 0; i < cells; ++i) {
             file >> row >> col;

             tab->array[row][col] = true;
         }
         file.close();
     }
     else {
         throw "Failed to open initial file init.txt";
     }
 }

 Engine::~Engine() {
     delete[] tab;
     delete[] temp;
 }

 int Engine::analiseCell(int w, int k) {
     int count = 0;

     for (int i = w - 1; i <= w + 1; i++) {
         for (int j = k - 1; j <= k + 1; j++) {
             if (i == w && j == k) {
                 continue;
             }
             else if ((i >= 0 && i < rows) && (j >= 0 && j < cols) && tab->array[i][j]) { //skips cells from outside the array
                 count++;
             }
         }
     }

     return count;
 }

 bool Engine::decide(int alive, int w, int k) {
     if (alive == 3) {
         return true;
     }
     else if (alive == 2 && tab->array[w][k]) {
         return true;
     }

     return false;
 }

 void Engine::analise() {
     for (int i = 0; i < rows; ++i) {
         for (int j = 0; j < cols; ++j) {
             int alive = analiseCell(i, j);
             bool decision = decide(alive, i, j);

             temp->array[i][j] = decision;
         }
     }

     for (int i = 0; i < rows; ++i) {
         for (int j = 0; j < cols; ++j) {
             tab->array[i][j] = temp->array[i][j];
         }
     }
 }

 bool Engine::getTab(int w, int k) {
     return tab->array[w][k];
 }