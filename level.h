#pragma once
#include <string>
#include "enemy.h"

namespace game {
    class Level {
        private:
            std::string description = "This is level description placeholder";
            Enemy level_enemy {};

        public:
            std::string get_description() const;
            Enemy& get_level_enemy();
    };
}
