#pragma once

namespace game {
    class Player {
        private:
            int health { 100 };
            int damage { 3 };

        public:
            int get_health() const;
            int get_damage() const;
            void take_damage(int damage);
            bool is_alive() const;
    };
}
