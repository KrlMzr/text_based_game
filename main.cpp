#include "game.h"

int main() {
    game::Game game;

    while (!game.is_game_over()) {
        game.display_level();
        game.fight_sequence();
        game.load_next_level();
    }

    return 0;
}