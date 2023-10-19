#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    Array(int Rows, int Cols); //create array
    ~Array(); //delete array
    Array(const Array& obj) = delete;
    Array& operator=(const Array& obj) = delete;
    friend class Engine;

    int rows;
    int cols;
    bool** array;
};

#endif //ARRAY_H
