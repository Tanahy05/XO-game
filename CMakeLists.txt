cmake_minimum_required(VERSION 3.28)
project(XO_game)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(XO_game
        3x3X_O.h
        BoardGame_Classes.h
        main.cpp
        PyramidX_O.h)
