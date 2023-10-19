#include "Array.h"
#include <iostream>

using namespace std;


Array::Array(int Rows, int Cols) {
    rows = Rows < 1 ? 1 : Rows;
    cols = Cols < 1 ? 1 : Cols;

    array = new bool* [rows];

    for (int i = 0; i < rows; ++i) {
        array[i] = new bool[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = false;
        }
    }
}

Array::~Array() {
    if (array) {
        for (int i = 0; i < rows; i++) {
            delete[] array[i];
        }

        delete[] array;
    }
}