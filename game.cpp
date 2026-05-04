#include <iostream>
#include "game.h"

namespace game {

    void Game::display_level() {
        std::cout << "Level: " << level_number << '\n';
        std::cout << loaded_level.get_description() << '\n';
        std::cout << "Enemy: " << loaded_level.get_level_enemy().get_name() << '\n';
        std::cout << loaded_level.get_level_enemy().get_description() << '\n';
    }

    void Game::increase_level_number() { ++level_number; }

    void Game::set_game_over() { game_over = true; }

    bool Game::is_game_over() const { return game_over; }

    void Game::fight_sequence() {
        bool fight_won{false};
        char player_choice{};
        while (true) {
            std::cout << "Do you want to attack ? (type y/n)" << '\n';
            std::cin >> player_choice;
            if (player_choice == 'y') {
                std::cout << "You attack!" << '\n';
                loaded_level.get_level_enemy().take_damage(player.get_damage());
                if (!loaded_level.get_level_enemy().is_alive()) {
                    std::cout << "Enemy HP: " << loaded_level.get_level_enemy().get_health() << '\n';
                    fight_won = true;
                    break;
                }
                std::cout << "Enemy HP: " << loaded_level.get_level_enemy().get_health() << '\n';
                std::cout << "Enemy: " << loaded_level.get_level_enemy().get_name() << " attacks!" << '\n';
                player.take_damage(loaded_level.get_level_enemy().get_damage());
                if (!player.is_alive()) {
                    std::cout << "You died!" << '\n';
                    std::cout << "Game Over!" << '\n';
                    set_game_over();
                    break;
                }
                std::cout << "Player HP: " << player.get_health() << '\n';
            }
            else {
                set_game_over();
                break;
            }
        }
        if (fight_won) std::cout << "You win!" << '\n';
    }

    void Game::load_next_level() {
        if (!game_over) {
            char continue_game{};
            std::cout << "Do you want to continue to next level? (y/n)" << '\n';
            std::cin >> continue_game;
            if (continue_game == 'y') {
                Level next_level{};
                loaded_level = next_level;
                ++level_number;
            }
            else {
                std::cout << "Game Over";
                set_game_over();
            }
        }
    }
}