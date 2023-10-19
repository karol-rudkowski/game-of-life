cmake_minimum_required(VERSION 3.24)
project(gameOfLife)

set(CMAKE_CXX_STANDARD 17)

add_executable(gameOfLife main.cpp Game.cpp Game.h Engine.cpp Engine.h Array.cpp Array.h GameGUI.cpp GameGUI.h GameCLI.cpp GameCLI.h)
