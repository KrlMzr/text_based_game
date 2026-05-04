# pragma once
#include "level.h"
#include "player.h"

namespace game {
    class Game {
        private:
            Player player{};
            Level loaded_level{};
            int level_number{1};
            bool game_over{false};

        public:
            void display_level();
            void fight_sequence();
            void increase_level_number();
            void load_next_level();
            void set_game_over();
            bool is_game_over() const;
    };
}
