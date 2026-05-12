cmake_minimum_required(VERSION 4.2)
project(text_based_game)

set(CMAKE_CXX_STANDARD 14)

add_executable(text_based_game
        main.cpp
        player.cpp
        player.h
        enemy.cpp
        enemy.h
        level.cpp
        level.h
        game.cpp
        game.h
        entity.cpp
        entity.h
)
