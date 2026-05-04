#pragma once
#include <string>

namespace game {
    class Enemy {
        private:
            int health { 10 };
            int damage { 1 };
            std::string name {"Placeholder Enemy"};
            std::string description {"Placeholder enemy description"};

        public:
            int get_health() const;
            int get_damage() const;
            std::string get_name() const;
            std::string get_description() const;
            void take_damage(int damage);
            bool is_alive() const;
    };
}
