#include <iostream>
#include "GameCLI.h"

using namespace std;


void GameCLI::view() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (getTab(i, j)) {
                cout << "#";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }
 }